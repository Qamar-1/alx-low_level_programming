/*
 * File: 3-function_like_macro.h
 * Author: Qamar
 * Description: Header file with a macro for computing the absolute value.
 */

#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * ABS - Macro to compute the absolute value of a number.
 * @x: The number to find the absolute value of.
 *
 * Description:
 * This macro takes a numeric argument x and computes its absolute value.
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif
