/*
Student Name= Birat Bikram Karki
Roll no= 9
Lab no= 01
Program=soimple calculator using  
Date= 23,oct

*/


#include <stdio.h>

int main()
{
int a,g,result;

char c;

printf("enter (+,-,*,/)");
scanf("%c",&c);

printf("enter the first number");
scanf("%d",&a);

printf("enter second number");
scanf("%d",&g);

switch(c){
	case '+':
			result=a+g;
			printf("sum of two number is:%d",result);
			break;
		
	case '-':
			result=a-g;
			printf("sum of two number is:%d",result);
			break;
			
			
	case '*':
			result=a*g;
			printf("sum of two number is:%d",result);
			break;		
			
				
	case '/':
			result=a/g;
			result=a/g;
			printf("sum of two number is:%d",result);
			break;		
				
			
}

	return 0;
}
