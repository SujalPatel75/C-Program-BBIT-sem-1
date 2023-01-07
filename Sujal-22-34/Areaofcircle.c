#include <stdio.h>
main()
{
	int r;
	float AOC;
	
	printf("Enter radius");
	scanf("%d", &r);
	
	AOC = 3.14*r*r;
	
	printf("Area of circle = %f", AOC);
}
