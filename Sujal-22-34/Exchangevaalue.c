#include <stdio.h>
main() 
{
	float a=7.2, b=12.99, temp;
	printf("\nBefore exchange a=%f, b=%f" ,a,b );
	
	temp =a;
	a=b;
	b= temp;
	
	printf("\nAfter exchange a=%f, b=%f" ,a,b);
}
