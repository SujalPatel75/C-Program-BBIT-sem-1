#include <stdio.h>
main()
{
	int a,b,add,sub,mu,div,mod;
	
	printf("\nEnter 1 integer number");
	scanf("%d"  ,&a);
	
	printf("\nEnter 2 integer number");
	scanf("%d",&b);
	
	sub=a-b;
	mu=a*b;
	div=a/b;
	add=a+b;
	mod=a%b;
	
	printf("\nsubtraction= %d", sub);
	printf("\nmultipication= %d", mu);
	printf("\nDivide= %d", div);
	printf("\nAddition= %d", add );
	printf("\nmodulo= %d", mod);
}
