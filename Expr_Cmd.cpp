// -*- C++ -*-

//==============================================================================
/**
 * @file       Expr_Cmd.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define DEAULT_EXPR_CMD_RANK_ 0

#include "Expr_Cmd.h"

using namespace std;

Expr_Cmd::Expr_Cmd (void) : 
	rank_ (DEAULT_EXPR_CMD_RANK_)
{
	// no code required here
}

Expr_Cmd::Expr_Cmd (const size_t rank) : 
	rank_ (rank)
{
	// no code required here
}

Expr_Cmd::~Expr_Cmd (void)
{
	// no heap data members
}

const size_t Expr_Cmd::rank (void) const
{
	return this->rank_;
}
