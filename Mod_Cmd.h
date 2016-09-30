// -*- C++ -*-

//==============================================================================
/**
 * @file       Mod_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _MOD_CMD_H_
#define _MOD_CMD_H_

#include "Binary_Op_Cmd.h"

class Mod_Cmd : public Binary_Op_Cmd
{
	
public:
	
	Mod_Cmd (void);
    
    ~Mod_Cmd (void);
    
    double evaluate (int val0, int val1) const;
	
};

#endif // !defined _MOD_CMD_H_
