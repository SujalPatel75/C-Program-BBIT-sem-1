#include<stdio.h>
#include<conio.h>
int main()
{

int num, sum=0, count=1;
printf("Enter Number ");
scanf("%d", &num);

while (count <= num)
{
    sum= sum +count;
    count++;
    

}

printf("sum= %d", sum);
getch();

}