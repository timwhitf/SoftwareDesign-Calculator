// -*- C++ -*-

//==============================================================================
/**
 * @file       Binary_Op_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#include "Binary_Op_Cmd.h"

using namespace std;

Binary_Op_Cmd::Binary_Op_Cmd (void) : 
    Expr_Cmd::Expr_Cmd ()
{
    // no code required here
}

Binary_Op_Cmd::Binary_Op_Cmd (const size_t rank) : 
    Expr_Cmd::Expr_Cmd (rank)
{
    // no code required here
}

Binary_Op_Cmd::~Binary_Op_Cmd (void)
{
    // no heap data members
}

void Binary_Op_Cmd::execute (Stack <double> & stack) const
{
	double val1 = stack.top ();
	stack.pop ();
	double val0 = stack.top ();
	stack.pop ();
	stack.push ( this->evaluate (val0, val1) );
}
