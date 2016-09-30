// -*- C++ -*-

//==============================================================================
/**
 * @file       Expr_Cmd_Factory.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _EXPR_CMD_FACTORY_H_
#define _EXPR_CMD_FACTORY_H_

#include "Num_Cmd.h"
#include "Add_Cmd.h"
#include "Subtr_Cmd.h"
#include "Mult_Cmd.h"
#include "Div_Cmd.h"
#include "Mod_Cmd.h"
#include "Open_Paren_Cmd.h"

class Expr_Cmd_Factory
{
	
public:
    
    Expr_Cmd_Factory (void);
    
    virtual ~Expr_Cmd_Factory (void) = 0;
    
    virtual Num_Cmd * create_num_cmd (int value) = 0;
    
    virtual Add_Cmd * create_add_cmd (void) = 0;
    
    virtual Subtr_Cmd * create_subtr_cmd (void) = 0;
    
    virtual Mult_Cmd * create_mult_cmd (void) = 0;
    
    virtual Div_Cmd * create_div_cmd (void) = 0;
    
    virtual Mod_Cmd * create_mod_cmd (void) = 0;
    
    virtual Open_Paren_Cmd * create_open_paren_cmd (void) = 0;
	
private:
    
    Expr_Cmd_Factory (const Expr_Cmd_Factory & ecf);
    
    const Expr_Cmd_Factory & operator = (const Expr_Cmd_Factory & ecf);
    
};

#endif // !defined _EXPR_CMD_FACTORY_H_
