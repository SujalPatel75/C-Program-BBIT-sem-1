#include <stdio.h>
main() 
{
	float a=7.2, b=12.99 ;
	printf("\nBefore exchange a=%f, b=%f" ,a,b );
	
	
    a= a+b;
    b= a-b;
    a=a-b;
	
	printf("\nAfter exchange a=%f, b=%f" ,a,b);
}
