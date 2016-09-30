// -*- C++ -*-

//==============================================================================
/**
 * @file       Calculator.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define NUM_CMD_RANK_ 99
#define OPEN_PAREN_CMD_RANK_ 0

#include <sstream>
#include <cstdlib>
#include "Calculator.h"

using namespace std;

Calculator::Calculator (void) : 
    postfix_ (Push_Array <Expr_Cmd *> () ), 
    converter_ (Stack <Expr_Cmd *> () )
{
	// no code required here
}

Calculator::~Calculator (void)
{
	this->clear_postfix ();
    this->clear_converter ();
}

// Accept user input until user types "QUIT".
// Call methods to convert input to postfix and then to evaluate commands in postfix_ array.
void Calculator::run (void)
{
    string user_input;
    bool keep_going = true;
    while (keep_going)
    {
        this->clear_converter ();
        getline (cin, user_input);
        if (user_input == "QUIT")
        {
            keep_going = false;
        }
        else
        {
            this->infix_to_postfix (user_input);
            double result = this->evaluate_postfix ();
            cout << result << endl;
        }
    }
}

// Timothy, you should also check for parenthesis and other commands.
// 
// Tim's Response: I have added checks for parentheses and other commands.
// 
// Break user input string into tokens. Pick out operator tokens, assume the rest are integers.
// Call factory to create all commands and process them (placing them either in postfix_ array or on converter_ stack),
// then call method to move remaining commands from converter_ to postfix_.
void Calculator::infix_to_postfix (string & infix)
{
    istringstream infix_stream (infix);
    string cur_token;
    while ( ! infix_stream.eof () )
    {
        infix_stream >> cur_token;
        if (cur_token == "+")
        {
            this->process_cmd ( this->factory_.create_add_cmd () );
        }
        else if (cur_token == "-")
        {
            this->process_cmd ( this->factory_.create_subtr_cmd () );
        }
        else if (cur_token == "*")
        {
            this->process_cmd ( this->factory_.create_mult_cmd () );
        }
        else if (cur_token == "/")
        {
            this->process_cmd ( this->factory_.create_div_cmd () );
        }
        else if (cur_token == "%")
        {
            this->process_cmd ( this->factory_.create_mod_cmd () );
        }
        else if (cur_token == "(")
        {
            this->process_cmd ( this->factory_.create_open_paren_cmd () );
        }
        else if (cur_token == ")")
        {
            while ( ( this->converter_.top () )->rank () != OPEN_PAREN_CMD_RANK_ )
            {
                this->postfix_.push ( this->converter_.top () );
                this->converter_.pop ();
            }
            this->converter_.pop ();
        }
        else
        {
			const char * cur_token_char = cur_token.c_str ();
            int num_cmd_val = atoi (cur_token_char);
            this->process_cmd ( this->factory_.create_num_cmd (num_cmd_val) );
        }
    }
    this->move_converter_cmds_to_postfix ();
}

// Use a command's rank to determine whether it is appended directly to postfix_ array or whether it is pushed
// to converter_ stack for possible reordering of commands.
// Number commands (with unique rank) are always appended directly to postfix_ array.
// Open parentheses are always pushed directly onto the converter_ stack.
// Close parentheses are not commands. They are handled by infix_to_postfix ().
// All other commands (regular operators) follow infix_to_postfix algorithm discussed in slides.
void Calculator::process_cmd (Expr_Cmd * cmd_to_process)
{
    if (cmd_to_process->rank () == NUM_CMD_RANK_)
    {
        this->postfix_.push (cmd_to_process);
    }
    else if (cmd_to_process->rank () == OPEN_PAREN_CMD_RANK_)
    {
        this->converter_.push (cmd_to_process);
    }
    else
    {
        while ( ! this->converter_.is_empty () && this->precedence (cmd_to_process) != 1 )
        {
            this->postfix_.push ( this->converter_.top () );
            this->converter_.pop ();
        }
        this->converter_.push (cmd_to_process);
    }
}

// Compare this command's rank with that of the command on top of converter_ stack.
// Explicitly check for empty converter_ stack, since this is possible, but also, driver will catch Stack <double>::empty_exception.
// In infix_to_postfix (), empty stack is logically equivalent to precedence returning 1, so let this explicit check return 1.
int Calculator::precedence (Expr_Cmd * cmd_ptr)
{
    if (this->converter_.size () == 0)
    {
        return 1;
    }
    else
    {
        if ( cmd_ptr->rank () < ( this->converter_.top () )->rank () )
        {
            return -1;
        }
        else if ( cmd_ptr->rank () == ( this->converter_.top () )->rank () )
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

// Evaluate each Expr_Cmd * in postfix_ array, then call clear_postfix () to delete them and set array size to 0.
// After executing all postfix commands in a valid postfix expression, the temporary "numbers" stack contains only one item,
// the solution.
// Driver will catch std::out_of_range thrown by Array index operator and Stack <double>::empty_exception thrown by Stack::top () and
// Stack::pop (), which are called indirectly via Expr_Cmd::execute ().
double Calculator::evaluate_postfix (void)
{
    Stack <double> numbers;
    // Timothy, you should delete the commands after the expression is evaluated. Otherwise, there will be memory leak.
    // 
    // Tim's Response: I added functionality (in clear_postfix () ) to manually delete commands in postfix expression.
    for (size_t i = 0; i < this->postfix_.cur_size (); i++)
    {
        ( this->postfix_ [i] )->execute (numbers);
    }
    this->clear_postfix ();
    return numbers.top ();
}

// Delete each Expr_Cmd * in postfix_ array, then clear array to set its cur_size to 0.
// Driver will catch std::out_of_range thrown by Array index operator.
void Calculator::clear_postfix (void)
{
    for (size_t i = 0; i < this->postfix_.cur_size (); i++)
    {
        delete this->postfix_ [i];
    }
    this->postfix_.clear ();
}

// Delete each Expr_Cmd * in converter_ stack, then clear stack to set its size to 0.
// Driver will catch Stack <double>::empty_exception thrown by Stack::top () and Stack::pop ().
void Calculator::clear_converter (void)
{
    for (size_t i = 0; i < this->converter_.size (); i++)
    {
        delete this->converter_.top ();
        this->converter_.pop ();
    }
    this->converter_.clear ();
}

// Move any commands remaining on converter_ stack and append them to the end of postfix_ array (with bottom
// command being appended last).
// Driver will catch Stack <double>::empty_exception thrown by Stack::top () and Stack::pop ().
void Calculator::move_converter_cmds_to_postfix (void)
{
    size_t old_converter_size = this->converter_.size ();
    for (size_t i = 0; i < old_converter_size; i++)
    {
        this->postfix_.push ( this->converter_.top () );
        this->converter_.pop ();
    }
}
