// -*- C++ -*-

//==============================================================================
/**
 * @file       Subtr_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define SUBTR_CMD_RANK_ 10

#include "Subtr_Cmd.h"

using namespace std;

Subtr_Cmd::Subtr_Cmd (void) : 
    Binary_Op_Cmd::Binary_Op_Cmd (SUBTR_CMD_RANK_)
{
    // no code required here
}

Subtr_Cmd::~Subtr_Cmd (void)
{
    // no heap data members
}

double Subtr_Cmd::evaluate (int val0, int val1) const
{
	return val0 - val1;
}
