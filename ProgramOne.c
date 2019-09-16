/* 	File Name: ProgramOne.c
	File Description: A program to take a Radix, Operand Size and a Number and displaying them in the Octal,Hexadecimal,Absolute Binary, Signed Magnitude Binary
			  and its One's Complement and Two's Complement form.
	Author Name: Nitik Satish Gupta
	Returning Array from Func: https://www.tutorialspoint.com/cprogramming/c_return_arrays_from_function.htm
	Format Specifiers of Fixed width integers: https://os.mbed.com/handbook/C-Data-Types
	One's Complement: https://www.tutorialspoint.com/one-s-complement
	One's Complement and Two's Complement Minimum: https://www.quora.com/What-is-the-smallest-number-representation-in-8-bits-ones-complement-encoding
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdint.h>
#include "BinaryFunctions.h"
int main()
{       int16_t Rad,n,*Bin=NULL,*OnesC_Bin=NULL,*TwosC_Bin=NULL;
	int16_t *Max_Bin=NULL,*Min_Bin=NULL,*Ones_Max=NULL;
	int16_t *Ones_Min=NULL,*Twos_Max=NULL,*Twos_Min=NULL;
	int16_t *Bin_Sign=NULL;
	int32_t num,abs_num,max_num,com_max,com_min,min_num;
	int16_t sign_min;
	double OnesC;
       	printf("\nInput ");			// For different Radix, different type of input will be required, so a switch case
	scanf("%hd",&Rad);
	switch(Rad)				
	{	case 8:	printf(" Value:");
			scanf("%o",&num);
			printf("%o",num);
			break;
		case 10:printf(" Value:");
			scanf("%d",&num);
			printf("%d",num);
			break;
		case 16:scanf(" Value:");
			scanf("%x",&num);
			printf("%x",num);
			break;
		default:printf(" Radix:%c",Rad);	// As explained in the question, only 8,10 or 16 can taken as a Radix
			printf("\n Invalid Radix Inserted");
			getchar();			
			exit(0);
			break;
	}
	printf(" Radix:%hd",Rad);
	printf(" Operand Size:");
	scanf("%hd",&n);
	printf("%hd",n);
	if(n!=4 && n!=8 && n!=16)
	{     	printf("\n Invalid Operand Size");	// As explained in the question, only 4,8 or 16 can taken as an Operand Size
		getchar();		
		exit(0);
	} 
	max_num=pow(2,n-1)-1;				// The max value of a signed integer can be: 2^(n-1)-1
	min_num=(-1*(pow(2,n-1)));			// The min value of a signed integer can be: -2^(n-1)
	com_max=pow(2,n-1)-1;				// The complementary maximum will be same as sign max value
	com_min=(-1*(pow(2,n)));			// the complementary min will also be same as sign min value
	sign_min=-1*(pow(2,n-1)-1);
	if(num>max_num || num<min_num)			// To check whether the Number inserted doesn't exceed the permissible limites of the operand size.
	{	printf("\n Input Number not within permissible Limits");
		getchar();
		exit(0);
	}
	abs_num=abs(num);
	Bin=BinaryConvert(abs_num,n);			// The BinaryConvert Function will convert the decimal to a binary array, the function will return a pointer to the array.
	printf("\nBinary Number(absolute): ");
	BinaryPrint(Bin,n);				// The BinaryPrint function will print the binary array, it should give the pointer to the binary array as an argument
	OnesC=OnesComplement(Bin,n);			// OnesComplement will return the decimal value of the one's complement form of the number given for simple Two's Complement calculation
	printf(" \t");
	Max_Bin=BinaryConvert(max_num,n);
	BinaryPrint(Max_Bin,n);
	printf(" \t");
	Min_Bin=BinaryConvert(0,n);
	BinaryPrint(Min_Bin,n);
	OnesC_Bin=BinaryConvert(OnesC,n);	
	printf("\nDecimal Number: \t %d ",abs_num);
	printf(" \t \t%d",max_num);
	printf(" \t \t0");				// 0 will be the minimum of the absolute, so no need to consume space for it
	printf("\nOctal Number: \t \t %o",abs_num);
	printf(" \t \t%o",max_num);
	printf(" \t \t0");
	printf("\nHexadecimal Number: \t %x",abs_num);
	printf(" \t \t%x",max_num);
	printf(" \t \t0");
	printf("\nSigned One's Complement: ");
	BinaryPrint(OnesC_Bin,n);
	printf(" \t");
	Ones_Max=BinaryConvert(com_max,n);
	BinaryPrint(Ones_Max,n);
	printf(" \t");
	Ones_Min=BinaryConvert(com_min,n);
	BinaryPrint(Ones_Min,n);
	TwosC_Bin=BinaryConvert(OnesC+1,n);		//TwosC_Bin will get the Binary form of the two's complement, which is One's Complement+1 of the value.
	printf("\nSigned Two's Complement: ");
	BinaryPrint(TwosC_Bin,n);
	printf(" \t");
	Twos_Max=BinaryConvert(com_max,n);
	BinaryPrint(Twos_Max,n);
	printf(" \t");
	Twos_Min=BinaryConvert(com_min,n);
	BinaryPrint(Twos_Min,n);
	printf("\nSign-Magnitude:");
	Bin_Sign=BinaryConvert(num,n);
	printf(" \t ");
	BinaryPrint(Bin_Sign,n);
	printf(" \t");
	Twos_Max=BinaryConvert(com_max,n);
	BinaryPrint(Twos_Max,n);
	printf(" \t");
	Twos_Min=BinaryConvert(sign_min,n);
	BinaryPrint(Twos_Min,n);
	return 0;
}

