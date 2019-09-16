/**
* Title:BinaryFunctions.h
* Brief: This .h file contains all the functions that are required to perform different binary operations like Binary Conversion, One's Complement form, Binary Form Print, 
*	 Byte Reversal and Decimal Conversion.
* 
* @author Nitik Satish Gupta
* @date 11th September 2019
* GCC Version:7.4.0
* 
*/

#ifndef BinaryFunctions_H_ 
#define BinaryFunctions_H_
#include<stdint.h>
#include<stdlib.h>
/*	Name: BinaryConvert
	Description: 	Binary convert takes two arguments, the number it needs to convert in binary and the operand size
			and return the pointer of the array.
			For signed integers, it will assign the most significant but as one.
			For converting into binary, it will keep on checking for the remainder when the number to be converted
			is divided by 2 and will store it in the array and then the number is divided by 2.
			The resulting array will be the binary form of the number. 
	Inputs: a-> The number to be converted into Binary, n-> The operand Size
	Returns: Binary-> Pointer to the array of the binary number
*/
int16_t * BinaryConvert(int32_t a,int16_t n)
{
	static int16_t Binary[16];
	if(a<0)
	{	Binary[0]=1;
		a=abs(a);
	}
	else
	{	Binary[0]=0;
	}
	do
	{        n--;
		 if((long int)a%2!=0)
		 { 	Binary[n]=1;
		 }
		 else
		 {	Binary[n]=0;
		 }
		 a=a/2;
		 //printf("%d",Binary[i]);
	}while(n!=1);
	return Binary;
}
/*	Name: One's Complement
	Description: 	One's Complement takes the binary form of a number and invert each bit for getting the One's Complement form
			The input is the pointer to binary array, and check the value of each bit and then invert it to get the resulting
			One's Complement form array.
			This array is used to get the decimal form by multiplying each bit with 2^(n-1) where n is the position of the 
			bit and then keeps adding the result to get the resulting decimal form.
			The first bit is checked to get the sign of the decimal.
			The Decimal Form can be used to add one and get the Two's Complement.
	Inputs: p-> Pointer to the array of the binary number One's Complement of the number, n-> The operand Size
	Returns: sum-> Decimal form of the One's Complement form. 
*/
int32_t OnesComplement(int16_t *p,int16_t n)
{       int16_t i;
	int32_t a,sum=0;
	if(!p)
	{	printf("\n Pointer is NULL, Terminating Program.......");
		exit(0);
	}	
	for(i=1;i<n;i++)
	{       
		if(*(p+i)==1)
		*(p+i)=0;
		else if(*(p+i)==0)
		*(p+i)=1;
	}
	for(i=1;i<n;i++)
	{
		a=pow(2,(n-1-i));    
		sum+=(*(p+i)) * a;
	}
	if(*(p)==1)
	{	sum=-1*sum;
	}
	return sum;
}
/*	Name: BinaryPrint
	Description: 	This function prints the binary form of the number. The pointer to the array containing the binary form of the number,
			is passed and is printed.
	Inputs: p-> Binary form of the number, n-> The operand Size
	Returns: none
*/
void BinaryPrint(int16_t *p,int16_t n)
{	int i;
	printf("0x");
	for(i=0;i<n;i++)
	{	printf("%hd",*(p+i));
	}
}
/*	Name: ByteReversal
	Description: 	The Byte Reversal changes the order of the byte, ie, the lower byte will exchange its place with the higher byte.
			The loop with two variables is used, one starting from 0 and the other from 8, and step by step, each bit exchanges its
			place. The bit exchange can be explained as:
			0<->8, 1<->9, 2<->10 ... and so on till 7<->15. 
	Inputs: p-> Pointer to the array of the binary number.
	Returns: Binary-> Pointer to the array of the reversed binary number.
*/
int16_t * ByteReversal(int16_t *p,int16_t n)
{	int8_t i,j,temp;
	if(!p)
	{	printf("\n Pointer is NULL, Terminating Program.......");
		exit(0);
	}
	for(i=0,j=8;i<=7;i++,j++)
	{  	temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
	}
	return p;
}
/*	Name: DecimalConvert
	Description: 	This array is used to get the decimal form by multiplying each bit with 2^(n-1) where n is the position of the 
			bit and then keeps adding the result to get the resulting decimal form. 
	Inputs: p-> The number to be converted into Binary,n->Operand Size
	Returns: sum-> Decimal form of the One's Complement form. 
*/
uint32_t DecimalConvert(int16_t *p,int16_t n)
{       int8_t i;
	uint16_t sum=0,a;
	if(!p)
	{	printf("\n Pointer is NULL, Terminating Program.......");
		exit(0);
	}	
	for(i=0;i<n;i++)
	{
		a=pow(2,(n-1-i));    //www.geeksforgeeks.com/powe-function-cc[using pow with integers]
		sum+=(*(p+i)) * a;
	}
	return sum;
}
#endif //BinaryFunctions_H_
