// -*- C++ -*-

//==============================================================================
/**
 * @file       Mod_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define MOD_CMD_RANK_ 20

#include "Mod_Cmd.h"

using namespace std;

Mod_Cmd::Mod_Cmd (void) : 
    Binary_Op_Cmd::Binary_Op_Cmd (MOD_CMD_RANK_)
{
    // no code required here
}

Mod_Cmd::~Mod_Cmd (void)
{
    // no heap data members
}

// C++ modulo operator does not automatically ensure that that it returns a positive integer,
// so check for that manually.
double Mod_Cmd::evaluate (int val0, int val1) const
{
    if ( (val0 % val1) >= 0 )
    {
        return val0 % val1;
    }
    else
    {
        return ( (val0 % val1) + val1 );
    }
}
