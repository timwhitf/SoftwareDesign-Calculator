// -*- C++ -*-

//==============================================================================
/**
 * @file       Div_Cmd.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _DIV_CMD_H_
#define _DIV_CMD_H_

#include "Binary_Op_Cmd.h"

class Div_Cmd : public Binary_Op_Cmd
{
	
public:
	
    class divide_by_zero : public std::exception
    {
        
        public:
            
            divide_by_zero (void) : 
                std::exception ()
            {
                // no code required here
            }
            
    };
    
	Div_Cmd (void);
    
    ~Div_Cmd (void);
    
    double evaluate (int val0, int val1) const;
	
};

#endif // !defined _DIV_CMD_H_
