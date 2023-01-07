#include <stdio.h>
main() 
{
	float a=7.2, b=12.99 ;
	printf("\nEnter value 1\n");
	scanf("%f"  ,&a);
	
    printf("\nEnter value 2\n");
	scanf("%f"  ,&b);
	
	
    a= a+b;
    b= a-b;
    a=a-b;
	
	printf("\nAfter exchange a=%f, b=%f" ,a,b);
}
