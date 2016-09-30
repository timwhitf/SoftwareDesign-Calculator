// -*- C++ -*-

//==============================================================================
/**
 * @file       Mult_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _MULT_CMD_H_
#define _MULT_CMD_H_

#include "Binary_Op_Cmd.h"

class Mult_Cmd : public Binary_Op_Cmd
{
	
public:
	
	Mult_Cmd (void);
    
    ~Mult_Cmd (void);
    
    double evaluate (int val0, int val1) const;
	
};

#endif // !defined _MULT_CMD_H_
