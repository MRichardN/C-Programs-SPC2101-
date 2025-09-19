/*
Name:
Reg No:
Description:  Variables and Data types
*/
#include<stdio.h>  //scanf(), printf()
//main function
int main (){
	//variable declaration 
	char a;   //%c
	char name[] = {}; //%s, Array
	int age ;  //%d
	float pi ;  //%f
	double profit ; //%lf
	
	//user prompts
	printf("\nEnter a character: ");
	scanf("%c", &a);
	
	printf(" \n Enter your name: ");
	scanf("%s", &name);
	
	printf("\nEnter age: ");
	scanf("%d", &age);
	
	printf("\nEnter Pi: ");
	scanf("%f", &pi);
	
	printf("\n Enter profit: ");
	scanf("%lf", &profit);
	
	printf("The character is %c \n", a);
	printf("The name(string) is %s.\n", name);
	printf("Age is: %5d  years\n", age);
	printf("The value of pi is %.2f \n ", pi);
	printf("The profit is Ksh. %.4lf \n" , profit);
	return 0;  //execution successful
}