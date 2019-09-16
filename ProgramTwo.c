/* 	File Name: ProgramTwo.c
	File Description: A program to take the ASCII Code, and identify the type of character ie. Lower case, Upper Case, Digit, White Space or Special Character and display its corresponding character
	Author Name: Nitik Satish Gupta
	ASCII Code Reference: https://www.asciitable.xyz/
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define White_Space (33)
int main()
{       uint16_t a;
	char white[][White_Space]={"null character" ,"start of header" ,"start of text","end of text","end of transmission","enquiry", "acknowledge","bell(ring)",
	"backspace", "horizontal tab", "line feed", "vertical tab", "form feed", "carriage return", "shift out", "shift in", "data_link_escape",
	"device control 1","device control 2", "device control 3","device control 4",
	"negative_acknowledge", "synchronize", "end transmission block", "cancel", "end of medium", "substitute", "escape", "file separator",
	"group separator", "record separator", "unit separator", "space"};
	printf("\nEnter the ASCII Code to be searched:");
	scanf("%d",&a);
	if(a>=97 && a<=122)
	{	printf("Code: %d \t Type: Lower Case \t ASCII Char: %c",a,a);		// Lower case characters are placed between 97 and 122
	}
	else if(a>=65 && a<=90)								// Upper case characters are placed between 65 and 90
	{	printf("Code: %d \t Type: Upper Case \t ASCII Char: %c",a,a);
	}
	else if(a>=48 && a<=57)								// Digits are placed between 48 and 57
	{	printf("Code: %d \t Type: Digit \t ASCII Char: %c",a,a);
	}
	else if(a>=0 && a<=32)								// All the White Spaces are placed between 0 and 32
	{
		printf("Code: %d \t Type: White Space \t ASCII Char: %s",a,white[a]);
	}
	else										// All the other characters are special characters
	{	printf("Code: %d \t Type: Special Character \t ASCII Char: %c",a,a);
	}
	return 0;
}
