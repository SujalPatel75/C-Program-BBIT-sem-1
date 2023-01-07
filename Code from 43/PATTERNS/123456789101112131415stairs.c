#include<stdio.h>
#include<conio.h>
int main()
{

int i,j,count=1;

for ( i = 1; i<=10; i++)
{
   for (j=1; j<=i; j++)
   {
    printf("%2d ",count);
    count++;
   }
   printf("\n");
}


getch();

}