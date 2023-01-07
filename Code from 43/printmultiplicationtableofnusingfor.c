#include<stdio.h>
#include<conio.h>
int main()
{

int num, sum=0, count;
printf("Enter Number ");
scanf("%d", &num);

for ( count=1; count<=10; count++ )
{
    
    
    printf("%d * %d = %d\n", num, count, num * count);
}


getch();

}