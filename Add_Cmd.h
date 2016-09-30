// -*- C++ -*-

//==============================================================================
/**
 * @file       Add_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _ADD_CMD_H_
#define _ADD_CMD_H_

#include "Binary_Op_Cmd.h"

class Add_Cmd : public Binary_Op_Cmd
{
	
public:
	
	Add_Cmd (void);
    
    ~Add_Cmd (void);
    
    double evaluate (int val0, int val1) const;
	
};

#endif // !defined _ADD_CMD_H_
