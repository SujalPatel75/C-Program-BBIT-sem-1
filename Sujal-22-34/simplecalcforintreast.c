#include <stdio.h>
main()
{
	float p,n,r,i;
	printf("Enter Principal Amount\n");
	scanf("%f", &p);
	
	printf("Enter No. of years\n");
	scanf("%f", &n);
	
	printf("Enter rate of intreast\n");
	scanf("%f", &r);
	
	i= (p*n*r)/100.0;
	
	printf("Intreast Earned= %f\n",i);
	
}
