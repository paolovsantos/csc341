//Paolo Santos
//CSC 341-40
//Pointer Program

#include <stdio.h>
#include <stdlib.h>

//global variables
	int x;
	int y = 15;
//Main Function
	int main(int argc, char *argv[])
	{
//local variables which hold values
	int i;
	int z = 0;
//array of size 5 with all elements initialized to 0
	int array1[5] = {0};
//pointers which only holds a reference or address
	int var;
	int *pointer1;
	int *values;
	values=(int *)malloc(sizeof(int)*5);

//Since a pointer only points to addresses, you must assign it the address of something
//  to point to. Pointer1 will now point to the address of z
	pointer1 = &z;
//print the value of a variable by specifying it's type, int in this case
	printf("\nThe value of variable z is [%d] \n",z);
//print the address of any variable using &
	printf("The address of variable z is [%p] \n",&z);
//So the value of pointer values is an address which points to the same address as z
	printf("The value of pointer1 = [%p] which is the same as the address of z which is [%p] \n",pointer1,&z);
//An array uses contiguous space to each address should be on after another
	for(i = 0;i < 5;i++)
	{
	printf("array1[%d] = [%d] with address of [%p] \n",i,array1[i],&array1[i]);
	}
	printf("\nLab #4\n");
//showing address of argc
	printf("argc = [%p] \n",&argc);
//showing address of stack variable
	printf("local variable var in stack address: [%p]\n",&var);
//showing address of heap  variables
	for(int j=0;j<5;j++)
	{
		printf("heap [%d] : address = [%p]\n",j,&values[j]);
	}	
//showing address of unitialized data
	printf("Uninitialized data x = [%d] : address = [%p]\n",x,&x);
//showing address of initialized data
	printf("Initialized data y = [%d] : address = [%p]\n",y,&y);


	return EXIT_SUCCESS;
	}
