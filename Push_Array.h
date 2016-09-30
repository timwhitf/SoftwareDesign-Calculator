// -*- C++ -*-

//==============================================================================
/**
 * @file       Push_Array.h
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#ifndef _PUSH_ARRAY_H_
#define _PUSH_ARRAY_H_

#include "Array.h"

/**
 * @class Push_Array
 *
 * Template implementation of an variable-sized array class that keeps tracks of its size and can only
 * be accessed for as many elements as have been "pushed," starting at the first element.
 */
template <typename T>
class Push_Array : public Array <T>
{
	
public:
	
	/// Type definition of the element type.
	typedef T type;
    
    /**
     * @class empty_exception
     *
     * Exception thrown to indicate the stack is empty.
     */
    class empty_push_array : public std::exception
    {
    public:
        /// Default constructor.
        empty_push_array (void)
                : std::exception ()
        {
                // no code required here
        }
    };
    
	/// Default constructor.
	Push_Array (void);

	/// Destructor.
	~Push_Array (void);
    
    /**
     * Get the current size of the array.
   	 * 
   	 * @return         Number of elements currently in the Push_Array.
   	 */
    size_t cur_size (void) const;
    
	/**
 	 * Expand the array by one and insert an element into the new slot.
	 * 
	 * @param[in]      element      Item to be placed in the next slot once Push_Array is expanded.
	 */
	void push (T element);
	
	/// Shrink the array's size by one.
    void pop (void);
    
    /// Set the array's size to zero.
    void clear (void);

protected:

	/// Current size of the array.
	size_t cur_size_;
	
};

#include "Push_Array.cpp" // include template file

#endif   // !defined _PUSH_ARRAY_H_
