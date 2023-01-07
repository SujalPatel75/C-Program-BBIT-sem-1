#include <stdio.h>
#include <conio.h>
int main()
{

    int num, sum = 0, count = 1;
    printf("Enter Number ");
    scanf("%d", &num);

    while (count <= num)

    {
        sum = (num)*(num+1)*(2*num+1)/(6);
        count++;
    }

    printf("sum= %d", sum);
    getch();
}