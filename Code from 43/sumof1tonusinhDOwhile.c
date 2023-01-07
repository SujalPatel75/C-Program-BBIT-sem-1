#include<stdio.h>
#include<conio.h>
int main()
{

int num, sum=0, count=11;
printf("Enter Number ");
scanf("%d", &num);

do
{
    sum= sum +count;
    count++;
    

} while (count <= num);

printf("sum= %d", sum);
getch();

}