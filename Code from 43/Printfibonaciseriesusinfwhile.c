#include<stdio.h>
#include<conio.h>
int main()
{

int first=0,second=1,next,i=3,length=0;
printf("Enter length of the fibonacci series:\n");
scanf("%d", &length);
printf("\n\n Fibonacci series:\n\n%d %d", first, second);
while (i<=length)
{
    next=first+second;
    printf(" %d",next);
    first=second;
    second=next;
    i=i+1;
}

printf("\n================================");

getch();

}