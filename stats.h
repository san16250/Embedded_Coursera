/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief header file for main program
 *
 * header file for main statistics program.
 *
 * @author Christian Sandoval
 * @date 10/13/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief function to print all the results
 *
 * function that takes all the parameters from previous results and prints
 * the statistics of an array
 *
 * @param unsigned char minimum value on array
 * @param unsigned char maximum value on array
 * @param unsigned char mean value on array
 * @param unsigned char median vaule on array
 *
 * @return unsigned char x
 */
void print_statistics(unsigned char minimum, unsigned char maximum,
		                unsigned char mean, unsigned char median);

/**
 * @brief function to print array
 *
 * function for printing all the elements in an array over the console
 * takes the pointer of the value in the array and the total items
 *
 * @param unsigned char * ptr pointer to an n-element data array
 * @param unsigned int m size of the array
 *
 * @return unsigned char x
 */
unsigned char print_array(unsigned char * ptr, unsigned int count);

/**
 * @brief function to find the median
 *
 * function for finding the median with two input variables and one output
 * variable
 *
 * @param unsigned char * ptr pointer to an n-element data array
 * @param unsigned int m size of the array
 *
 * @return unsigned char x
 */
unsigned char median_mean(unsigned char * ptr, unsigned int count);

/**
 * @brief function to find the mean of the array
 *
 * function for finding the mean with two input variables and one output variable
 *
 * @param unsigned char * ptr pointer to an n-element data array
 * @param unsigned int m size of the array
 *
 * @return unsigned char x
 */
unsigned char find_mean(unsigned char * ptr, unsigned int count);

/**
 * @brief function to find the maximum of the array
 *
 * function for finding the max value with two input variables and one
 * output variable
 *
 * @param unsigned char * ptr pointer to an n-element data array
 * @param unsigned int m size of the array
 *
 * @return unsigned char x
 */
unsigned char find_maximum(unsigned char * ptr, unsigned int count);

/**
 * @brief function to find the minimum of the array
 *
 * function for finding the minimum value of an array with two input variables
 * and one output variable
 *
 * @param unsigned char * ptr pointer to an n-element data array
 * @param unsigned int m size of the array
 *
 * @return unsigned char x
 */
unsigned char find_minimum(unsigned char * ptr, unsigned int count);

/**
 * @brief function to sort the array
 *
 * function for finding sort the array form largest to smallest
 *
 * @param unsigned char * ptr pointer to an n-element data array
 * @param unsigned int m size of the array
 *
 * @return unsigned char x
 */
unsigned char sort_array(unsigned char * ptr, unsigned int count);


#endif /* __STATS_H__ */
