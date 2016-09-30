// -*- C++ -*-

//==============================================================================
/**
 * @file       Num_Cmd.cpp
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
#define DEFAULT_NUM_CMD_VALUE_ 0

#include "Num_Cmd.h"

using namespace std;

Num_Cmd::Num_Cmd (void) : 
    Expr_Cmd::Expr_Cmd (NUM_CMD_RANK_)
{
    this->value_ = DEFAULT_NUM_CMD_VALUE_;
}

Num_Cmd::Num_Cmd (int value) : 
    Expr_Cmd::Expr_Cmd (NUM_CMD_RANK_)
{
	this->value_ = value;
}

Num_Cmd::~Num_Cmd (void)
{
    // no code required here
}

void Num_Cmd::execute (Stack <double> & values) const
{
	values.push (this->value_);
}
