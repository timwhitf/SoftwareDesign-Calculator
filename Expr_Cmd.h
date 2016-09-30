// -*- C++ -*-

//==============================================================================
/**
 * @file       Expr_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _EXPR_CMD_H_
#define _EXPR_CMD_H_

#include <cstring>        // for size_t definition
#include <iostream>
#include "Stack.h"

class Expr_Cmd
{
	
public:
	
    Expr_Cmd (void);
    
    Expr_Cmd (const size_t rank);
    
    virtual ~Expr_Cmd (void);
    
	/// Run the command.
	virtual void execute (Stack <double> & values) const = 0;
    
    // Timothy, The precedence method on the base object is not a good design
    // choice since it implies that numbers must have a precedence. Unfortunately,
    // this is not the case. You should improve your hierarchy to overcome a potential
    // LSP problem.
    // 
    // Tim's Response: Unfortunately, I did not have time to experiment with changing this.
    
    const size_t rank (void) const;
    
private:
    
    const size_t rank_;
    
};

#endif // !defined _EXPR_CMD_H_
