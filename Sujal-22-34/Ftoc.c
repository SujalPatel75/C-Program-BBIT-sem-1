#include <stdio.h>
main() 
{
	 float cel, fer;
	 printf("\nEnter Temperature Value in ferenhit");
	 scanf("%f",&fer);
	 
	 fer = (5.0*(fer-32))/9.0;
	 printf("\nTemperature in celcius=%f" , fer);
	 
	
}
