// -*- C++ -*-

//==============================================================================
/**
 * @file       Calculator.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "Push_Array.h"
#include "Stack.h"
#include "Stack_Expr_Cmd_Factory.h"

using namespace std;

class Calculator
{
	
public:
	
    class invalid_postfix_expr : public std::exception
    {
    public:
        /// Default constructor.
        invalid_postfix_expr (void)
                : std::exception ()
        {
                // no code required here
        }
    };
    
    Calculator (void);
    
    ~Calculator (void);
    
	/// Loop that accepts input and produces output.
	// Runs until user enters "QUIT".
	void run (void);
	
	/// Convert user input (math expression) from infix to postfix.
	void infix_to_postfix (string & infix);
    
    void process_cmd (Expr_Cmd * cmd_ptr);
    
    int precedence (Expr_Cmd * cmd_ptr);
    
    /// Evaluate postfix.
    double evaluate_postfix (void);
    
    void clear_postfix (void);
    
    void clear_converter (void);
    
    void move_converter_cmds_to_postfix (void);
	
private:
    
    Stack_Expr_Cmd_Factory factory_;
    
    Push_Array <Expr_Cmd *> postfix_;
    
    Stack <Expr_Cmd *> converter_;
        
};

#endif // !defined _CALCULATOR_H_
