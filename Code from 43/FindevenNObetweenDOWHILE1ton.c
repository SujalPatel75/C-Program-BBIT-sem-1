
#include<stdio.h>
#include<conio.h>
int main()
{

int num,count=1;
printf("Enter Number ");
scanf("%d", &num);

do
{
    if (count %2 ==0)
    {
        printf("%d  ", count);
    }
    count++;
    
    
} while (count<=num);
getch();

}