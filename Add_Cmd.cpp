// -*- C++ -*-

//==============================================================================
/**
 * @file       Add_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define ADD_CMD_RANK_ 10

#include "Add_Cmd.h"

using namespace std;

Add_Cmd::Add_Cmd (void) : 
    Binary_Op_Cmd::Binary_Op_Cmd (ADD_CMD_RANK_)
{
    // Timothy, do not have any log statements in the classes. You can have in your driver if required.
    // 
    // Tim's Response: I have removed all log statements.
    // no code required here
}

Add_Cmd::~Add_Cmd (void)
{
    // no heap data members
}

double Add_Cmd::evaluate (int val0, int val1) const
{
	return val0 + val1;
}
