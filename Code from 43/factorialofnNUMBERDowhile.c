#include<stdio.h>
#include<conio.h>
int main()
{

int num, fact=1, count=11;
printf("Enter Number ");
scanf("%d", &num);

do 
{
    fact= fact*count;
    count++;
    

} while (count <= num);

printf("Factorial= %d", fact);
getch();


}