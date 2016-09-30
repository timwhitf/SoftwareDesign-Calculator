// -*- C++ -*-

//==============================================================================
/**
 * @file       Div_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define DIV_CMD_RANK_ 20

#include "Div_Cmd.h"

using namespace std;

Div_Cmd::Div_Cmd (void) : 
    Binary_Op_Cmd::Binary_Op_Cmd (DIV_CMD_RANK_)
{
    // no code required here
}

Div_Cmd::~Div_Cmd (void)
{
    // no heap data members
}

double Div_Cmd::evaluate (int val0, int val1) const
{
    if (val1 != 0)
    {
        return val0 / val1;
    }
	else
    {
        throw divide_by_zero ();
    }
}
