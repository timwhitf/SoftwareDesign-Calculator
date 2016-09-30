// -*- C++ -*-

//==============================================================================
/**
 * @file       driver.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#include "Calculator.h"

using namespace std;

int main (void)
{
	Calculator c1;
    try
    {
        c1.run ();
    }
    catch (out_of_range oor)
    {
        
    }
    catch (Push_Array <Expr_Cmd *>::empty_push_array epa)
    {
        
    }
    catch (Stack <Expr_Cmd *>::empty_exception ee)
    {
        
    }
    catch (Stack <double>::empty_exception ee)
    {
        
    }
    catch (invalid_argument ia)
    {
        
    }
    catch (Div_Cmd::divide_by_zero dbz)
    {
        
    }
    
	return 0;
}
