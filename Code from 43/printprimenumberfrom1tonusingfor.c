#include<stdio.h>
#include<conio.h>
int main()
{

int num,count,i,a;

printf("Enter a number ");
scanf("%d", &num);

for (a=1; a<=num; a++)
{
   count=0;

   for (i=2; i<=a/2; i++)
   {
    if (a%i==0)
    {
       count++;
       break; /* code */
    }
    
   }
   if (a!=1 && count==0)

{
    printf("  %d",a);
}

}



getch();

}