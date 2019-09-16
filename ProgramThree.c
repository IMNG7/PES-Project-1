/* 	File Name: ProgramThree.c
	File Description: A program to take the ASCII Code, and identify the type of character ie. Lower case, Upper Case, Digit, White Space or Special Character and display its corresponding character
	Author Name: Nitik Satish Gupta
	Byte Reversal Logic: https://www.mathworks.com/help/supportpkg/nucleo/ref/bytereversal.html
	Bit Shifting Logic: https://www.interviewcake.com/concept/java/bit-shift
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdint.h>
#include "CheckConditions.h"
#include "BinaryFunctions.h"
#define bit_value (16)
int main()
{       uint16_t a;
	int16_t *bin=NULL,*bin_shift=NULL;
	scanf("%hx",&a);
	printf("Input Number:%hx",a);
	printf("\nNumber in Hex:%x",a);
	printf("\nCondition 1: Original Number and 3 Out of last 4 bits are on");    
	bin=BinaryConvert(a,bit_value);						// Binary Convert converts the hex value into the binary form
	CheckCond(bin,bit_value);						// This Condition checks whether the 3 out of last 4 bits are on, if yes, then prints the binary output
	printf("\nCondition 2: Byte Reversal and 3 Out of last 4 bits are on");	
	bin_shift=ByteReversal(bin,bit_value);					// The byte Reversal function is called, and function will change the value according to the logic explained in the 
										// link at the top
	a=DecimalConvert(bin_shift,bit_value);					
	printf("\nNumber in Hex:%x",a);			
	CheckCond(bin_shift,bit_value);					
	printf("\nCondition 3: 4 bits to the left and 3 Out of last 4 bits are on");	
	a=a<<4;									// "<<" command shifts the bits to the left side, for more infor, refer the link at the top
	printf("\nNumber in Hex:%x",a);
	bin=BinaryConvert(a,bit_value);
	CheckCond(bin,bit_value);	
	printf("\nCondition 4: 4 bits to the right and 3 Out of last 4 bits are on");	
	a=a>>8;									// ">>" command shifts the bits to the right side, for more infor, refer the link at the to
	printf("\nNumber in Hex:%x",a);
	bin=BinaryConvert(a,bit_value);
	CheckCond(bin,bit_value);
	getchar();
	return 0;
}


