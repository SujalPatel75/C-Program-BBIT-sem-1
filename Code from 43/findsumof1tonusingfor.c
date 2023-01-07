#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count,sum=0;

    printf("Enter number  ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++)
    {
        sum=sum+count;
    }
printf("sum= %d\n",sum);
    getch();
}