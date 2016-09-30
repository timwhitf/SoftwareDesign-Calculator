// -*- C++ -*-

//==============================================================================
/**
 * @file       Stack_Expr_Cmd_Factory.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _STACK_EXPR_CMD_FACTORY_H_
#define _STACK_EXPR_CMD_FACTORY_H_

#include "Expr_Cmd_Factory.h"

class Stack_Expr_Cmd_Factory : public Expr_Cmd_Factory
{
	
public:
    
    Stack_Expr_Cmd_Factory (void);
    
    ~Stack_Expr_Cmd_Factory (void);
    
    Num_Cmd * create_num_cmd (int value);
    
    Add_Cmd * create_add_cmd (void);
    
    Subtr_Cmd * create_subtr_cmd (void);
    
    Mult_Cmd * create_mult_cmd (void);
    
    Div_Cmd * create_div_cmd (void);
    
    Mod_Cmd * create_mod_cmd (void);
    
    Open_Paren_Cmd * create_open_paren_cmd (void);
    
};

#endif // !defined _STACK_EXPR_CMD_FACTORY_H_
