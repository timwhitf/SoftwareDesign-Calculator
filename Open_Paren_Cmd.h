// -*- C++ -*-

//==============================================================================
/**
 * @file       Open_Paren_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _OPEN_PAREN_CMD_H_
#define _OPEN_PAREN_CMD_H_

#include "Expr_Cmd.h"

class Open_Paren_Cmd : public Expr_Cmd
{

public:
    
    Open_Paren_Cmd (void);
    
    ~Open_Paren_Cmd (void);
    
    void execute (Stack <double> & stack) const;
	
};

#endif // !defined _OPEN_PAREN_CMD_H_
