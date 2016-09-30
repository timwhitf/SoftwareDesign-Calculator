// -*- C++ -*-

//==============================================================================
/**
 * @file       Mult_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define MULT_CMD_RANK_ 20

#include "Mult_Cmd.h"

using namespace std;

Mult_Cmd::Mult_Cmd (void) : 
    Binary_Op_Cmd::Binary_Op_Cmd (MULT_CMD_RANK_)
{
    // no code required here
}

Mult_Cmd::~Mult_Cmd (void)
{
    // no heap data members
}

double Mult_Cmd::evaluate (int val0, int val1) const
{
	return val0 * val1;
}
