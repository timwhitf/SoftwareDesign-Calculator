// -*- C++ -*-

//==============================================================================
/**
 * @file       Push_Array.cpp
 *
 * Author: Tim Whitfield
 * CSCI 49000
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help on this assignment.
 */
//==============================================================================

#define GROWTH_RATE_ 2

#include "Push_Array.h"

using namespace std;

//
// Array
//
template <typename T>
Push_Array <T>::Push_Array (void) : 
    Array <T> ()
{
    this->cur_size_ = 0;
}

//
// ~Push_Array
//
template <typename T>
Push_Array <T>::~Push_Array (void)
{
    // no heap data introduced by derived class Push_Array
}

//
// cur_size
//
template <typename T>
size_t Push_Array <T>::cur_size (void) const
{
    return this->cur_size_;
}

//
// push
//
template <typename T>
void Push_Array <T>::push (T element)
{
    try
    {
        this->set (this->cur_size_, element);
    }
    catch (out_of_range oor)
    {
        this->resize (this->size_ * GROWTH_RATE_);
        this->set (this->cur_size_, element);
    }
    this->cur_size_ ++;
}

//
// pop
//
template <typename T>
void Push_Array <T>::pop (void)
{
    if (this->cur_size_ == 0)
    {
        throw empty_push_array ();
    }
    else
    {
        this->cur_size_ --;
    }
}

//
// clear
//
template <typename T>
void Push_Array <T>::clear (void)
{
    this->cur_size_ = 0;
}
