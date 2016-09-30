// -*- C++ -*-

//==============================================================================
/**
 * @file       Stack_Expr_Cmd_Factory.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#include "Stack_Expr_Cmd_Factory.h"

using namespace std;

Stack_Expr_Cmd_Factory::Stack_Expr_Cmd_Factory (void) : 
    Expr_Cmd_Factory::Expr_Cmd_Factory ()
{
    // no code required here
}

Stack_Expr_Cmd_Factory::~Stack_Expr_Cmd_Factory (void)
{
    // no heap data members
}

Num_Cmd * Stack_Expr_Cmd_Factory::create_num_cmd (const int value)
{
    return new Num_Cmd (value);
}

Add_Cmd * Stack_Expr_Cmd_Factory::create_add_cmd (void)
{
    return new Add_Cmd ();
}

Subtr_Cmd * Stack_Expr_Cmd_Factory::create_subtr_cmd (void)
{
    return new Subtr_Cmd ();
}

Mult_Cmd * Stack_Expr_Cmd_Factory::create_mult_cmd (void)
{
    return new Mult_Cmd ();
}

Div_Cmd * Stack_Expr_Cmd_Factory::create_div_cmd (void)
{
    return new Div_Cmd ();
}

Mod_Cmd * Stack_Expr_Cmd_Factory::create_mod_cmd (void)
{
    return new Mod_Cmd ();
}

Open_Paren_Cmd * Stack_Expr_Cmd_Factory::create_open_paren_cmd (void)
{
    return new Open_Paren_Cmd ();
}
