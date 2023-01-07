#include<stdio.h>
#include<conio.h>
 int main() 
{
	int a, b, c;
	float average;
	
	
	printf("Enter Number 1  ");
	scanf("%d", &a);
	
	printf("Enter Number 2  ");
	scanf("%d", &b);
	
	printf("Enter Number 3  ");
	scanf("%d", &c);
	
	
	average = (float) (a+b+c)/3.0;  //Also you can use 3.0 instead of 3 without using typecasting
	
	printf("\nvalue of Average =%f" ,average);

 
   getch();
}
