// -*- C++ -*-

//==============================================================================
/**
 * @file       Open_Paren_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define OPEN_PAREN_CMD_RANK_ 0

#include "Open_Paren_Cmd.h"

using namespace std;

Open_Paren_Cmd::Open_Paren_Cmd (void) : 
    Expr_Cmd::Expr_Cmd (OPEN_PAREN_CMD_RANK_)
{
    // no code required here
}

Open_Paren_Cmd::~Open_Paren_Cmd (void)
{
    // no code required here
}

void Open_Paren_Cmd::execute (Stack <double> & values) const
{
	// no code required here
}
