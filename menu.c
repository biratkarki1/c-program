/*
Student Name= Birat Bikram Karki
Roll no= 9
Lab no= 01
Program= 
Date= 23,oct
*/


#include <stdio.h>

int main()
{
int a,g,result;

char c;
printf("\n1 for '+' addition\n");
printf("\n2 for '-' subtraction\n");
printf("\n3 for '*' multiplication\n");
printf("\n4 for '/' division\n");
scanf("%c",&c);
printf("\n you have selected %c",c);


printf("\nenter the first number");
scanf("%d",&a);

printf("\nenter second number");
scanf("%d",&g);

switch(c){
	case '1':
			result=a+g;
			printf("\nsum of two number is:%d",result);
			break;
		
	case '2':
			result=a-g;
			printf("\nsubstraction of two number is:%d",result);
			break;
			
			
	case '3':
			result=a*g;
			printf("\nmultiplication of two number is:%d",result);
			break;		
			
				
	case '4':
			result=a/g;
			//result=a/g;
			printf("\ndivision of two number is:%d",result);
			break;		
				
			
}

	return 0;
}
