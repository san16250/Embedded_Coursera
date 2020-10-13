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
 * @file stats.c 
 * @brief Main program for analyzing functions
 *
 * Program that can analyze an array of unsigned char data items and report
 * analytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author Christian Sandoval
 * @date 10/13/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char x = 0;
  /* Statistics and Printing Functions Go Here */
  x = find_mean(test, SIZE);
  printf("The mean of the data set is: %u\n",x);

}

/* Add other Implementation File Code Here */
unsigned char find_mean(unsigned char * ptr, unsigned int count){
	unsigned char i = 0;
	unsigned int average = 0;
	for(i=0; i < count; i++){
		average += *ptr;
		ptr++;
	}
	return (average / count);
}

void print_statistics(unsigned char minimum, unsigned char maximum,
		unsigned char mean, unsigned char median){

}

unsigned char print_array(unsigned char * ptr, unsigned int count){

}

unsigned char find_median(unsigned char * ptr, unsigned int count){

}

unsigned char find_maximum(unsigned char * ptr, unsigned int count){

}

unsigned char find_minimum(unsigned char *ptr, unsigned int count){

}

unsigned char sort_array(unsigned char *ptr, unsigned int count){

}
