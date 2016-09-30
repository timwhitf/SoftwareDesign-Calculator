// -*- C++ -*-

//==============================================================================
/**
 * @file       Binary_Op_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _BINARY_OP_CMD_H_
#define _BINARY_OP_CMD_H_

#include "Expr_Cmd.h"

class Binary_Op_Cmd : public Expr_Cmd
{
	
public:
    
    Binary_Op_Cmd (void);
    
    Binary_Op_Cmd (const size_t rank);
    
    virtual ~Binary_Op_Cmd (void);
    
    void execute (Stack <double> & stack) const;
    
    virtual double evaluate (int val0, int val1) const = 0;
	
};

#endif // !defined _BINARY_OP_CMD_H_
