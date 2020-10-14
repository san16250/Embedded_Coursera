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
#include <stdlib.h>
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
  unsigned char minimum = 0, maximum = 0, mean = 0, median = 0;
  unsigned char * sorted;
  /* Statistics and Printing Functions Go Here */
  minimum = find_minimum(test, SIZE);
  maximum = find_maximum(test, SIZE);
  mean = find_mean(test, SIZE);
  median = find_median(test,SIZE);
  print_statistics(minimum, maximum, mean, median);
  sorted = sort_array(test, SIZE);
  printf("Sorted array: \n");
  print_array(sorted, SIZE);

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
	printf("The minimum value of the array is: %u\n", minimum);
	printf("The maximum value of the array is: %u\n", maximum);
	printf("The mean value of the array is: %u\n", mean);
	printf("The median value of the array is: %u\n", median);

}

void print_array(unsigned char * ptr, unsigned int count){
	int i = 0;
	printf("[");
	for(i = 0; i < count; i++){
		printf("%u, ", *ptr);
		ptr++;
	}
	printf("]\n");
}

unsigned char find_median(unsigned char * ptr, unsigned int count){
	unsigned int i = 0, j = 0, temp = 0;
	unsigned char median;
	for(i = 0; i < count; i++){
		for( j = i + 1; j < count; j++){
			if(*(ptr + j) < *(ptr + i)){
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}
	median = *(ptr + SIZE/2);
	return median;

}

unsigned char find_maximum(unsigned char * ptr, unsigned int count){
	unsigned char i= 0, maximum=1, temp=0;
	for(i = 0; i < count; i++){
		temp = *ptr;
		ptr++;
		if(maximum < temp){
			maximum = temp;
		}
	}
	return maximum;
}

unsigned char find_minimum(unsigned char *ptr, unsigned int count){
	unsigned char i = 0, minimum = 255, temp = 0;
	for (i = 0; i< count; i++){
		temp = *ptr;
		ptr++;
		if(minimum > temp){
			minimum = temp;
		}
	}
	return minimum;
}

unsigned char *sort_array(unsigned char *ptr, unsigned int count){
	unsigned int i = 0, j = 0, temp = 0;
	unsigned char *sorted = malloc(count);
	for(i = 0; i < count; i++){
		for( j = i + 1; j < count; j++){
			if(*(ptr + j) < *(ptr + i)){
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}
	for(i = 0; i <count; i++){
		sorted[i] = *(ptr + i);
	}
	return sorted;
}
