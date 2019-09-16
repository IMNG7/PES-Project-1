/**
* Title:CheckConditions.h
* Brief: This .h file contains the check condition function designed for the problem 3 of the assignment
* 
* @author Nitik Satish Gupta
* @date 11th September 2019
* GCC Version:7.4.0
* 
*/
#ifndef CheckConditions_H_ 
#define CheckConditions_H_
#include<stdint.h>
#include<stdlib.h>
#include "BinaryFunctions.h"
/*	Name: CheckCond
	Description: 	Check Condition function checks whether atleast 3 out of the last 4 bits are on.
			if the Condition is true, it will return the result as True and Print the Binary number,
			else it will just return the Result as false  
	Inputs: p-> The number to be converted into Binary
	Returns: none.
*/
void CheckCond(int16_t *p,int16_t bits)
{	
	int8_t i,a=0;
	printf("\n");	
	if(!p)
	{	printf("\n Pointer is NULL, Terminating Program.......");		// If null Pointer is encountered, the program will be automatically terminated.
		exit(0);
	}	
	for(i=15;i>11;i--)
	{	
		if(*(p+i)==1)								// Checking the last 4 digits of the binary array 0ne by one
		{	a++;
		}	
	}	
	if(a>2)
	{
		printf("\n The Test Result is True");					// if the result is true, then binary number as explained in the question will be printed, else nothing will happen
		BinaryPrint(p,bits);
	}
	else
	{	printf("\n The Test Result is False");
	}
}
#endif //CheckConditions_H_
