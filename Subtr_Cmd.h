// -*- C++ -*-

//==============================================================================
/**
 * @file       Subtr_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _SUBTR_CMD_H_
#define _SUBTR_CMD_H_

#include "Binary_Op_Cmd.h"

class Subtr_Cmd : public Binary_Op_Cmd
{
	
public:
	
	Subtr_Cmd (void);
    
    ~Subtr_Cmd (void);
    
    double evaluate (int val0, int val1) const;
	
};

#endif // !defined _SUBTR_CMD_H_
