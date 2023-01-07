#include<stdio.h>
#include<conio.h>
int main()
{

int number,copy, sum=0;
printf("Enter any digit number : to find its sum ");
scanf("%d", &number);

copy=number;

do
{
    sum= sum+(number%10);
    number=number/10;
    

} while (number>0);

printf("\n SUM OF %d = %d", copy ,sum);
getch();

}