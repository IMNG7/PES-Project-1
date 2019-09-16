*********************************************************************************************************************************************************************************************
											PES PROJECT 1
										Developed By: Nitik Satish Gupta

PES Project 1 is aimed to brush up the concepts of C by working on various ploblem that include Binary operations, ASCII to Character Conversion, and Bitwise Operations which might be 
required during development of basic Embedded C Programs.
**********************************************************************************************************************************************************************************************
Repo Contents
*********************************************************************************************************************************************************************************************
1. ProgramOne.c:A program to take a Radix, Operand Size and a Number and displaying them in the Octal,Hexadecimal,Absolute in Binary, Signed Magnitude in Binary and its One's Complement 
		and Two's Complement form. 
2. ProgramOne.out:The Output file of the ProgramOne.c program, the test sets are:{-6, 10, 4}, {-6, 9, 4}, {-6, 10, 5}, {-9, 10, 4}, {237, 10, 8}, {0354, 8, 8}, {0xEB, 16, 8}, {-125, 10, 8},  
		  {65400, 10, 8}, {65400, 10, 16}, {-32701, 10, 16} 
3. ProgramTwo.c:A program to check different conditions on a given hexadecimal Number.
4. ProgramTwo.out:The Output file of the ProgramTwo.c program, the test sets are:{66,114,117,99,101,32,83,97,121,115,32,72,105,33,7,9,50,48,49,57} 
5. ProgramThree.c:A program to check different conditions on a given hexadecimal Number. 
6. ProgramThree.out:The Output file of the ProgramThree.c program, the test set is : 0xCAFE.
7. BinaryFunctions.h: This .h file contains all the functions that are required to perform different binary operations like Binary Conversion, One's Complement form, Binary Form Print, 
	 	      Byte Reversal and Decimal Conversion.
8. CheckConditions.h: This .h file contains the check condition function designed for the problem 3 of the assignment
*********************************************************************************************************************************************************************************************
Notes:
*********************************************************************************************************************************************************************************************
* The program is Compiled on the GCC Compiler with C99 Standard Compliance.
* The GCC version is 7.4.0
* For more info on usage of GCC with C99 visit the link:
* 	https://askubuntu.com/questions/468671/how-to-enable-c99-and-c11-on-gcc
* Keep all the program(.c) files and header(.h) files in the same folder for the proper compilation.
* During compilation in linux, for math.h header file, use the command: gcc -std=c99 -o outputfilename.out ProgramOne.c -lm
* Above Information is derived from: 
*	https://ubuntuforums.org/showthread.php?t=1415408
*	https://www.gnu.org/software/gcc/c99status.html
* -lm command allows the compiler to work on math.h
* Before starting the compilation in linux, update the software using these commands: 
*	sudo apt-get update
*	sudo apt-get upgrade
*	sudo apt-get install build-essential
* These will install the required libraries for the project.
* For getting all the warnings in linux, use: gcc -std=c99 -o outputfilename.out ProgramOne.c -lm -Wall
* For getting all the Warnings as errors in linux, useL gcc -std=c99 -o outputfilename.o ProgramOne.c -lm -Wall -Werror
* For inserting the outputs in a file in linux, use the tee command: ./outputfilename.o |tee Programfilename.out  
* For appending the outputs in a file in linux, use the tee command: ./outputfilename.o |tee -a Programfilename.out
* For more info on |tee, follow the links:
*	https://www.geeksforgeeks.org/tee-command-linux-example/
*	https://stackoverflow.com/questions/764463/unix-confusing-use-of-the-tee-command
*********************************************************************************************************************************************************************************************