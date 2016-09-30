// -*- C++ -*-

//==============================================================================
/**
 * @file       Num_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _NUM_CMD_H_
#define _NUM_CMD_H_

#include "Expr_Cmd.h"

class Num_Cmd : public Expr_Cmd
{

public:
    
    Num_Cmd (void);
    
    Num_Cmd (int value);
    
    ~Num_Cmd (void);
    
    void execute (Stack <double> & stack) const;
	
private:
	
	int value_;
	
};

#endif // !defined _NUM_CMD_H_
