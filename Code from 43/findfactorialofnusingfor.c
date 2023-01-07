#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count,fact=1;

    printf("Enter number  ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++)
    {
        fact=fact*count;
    }
printf("Factorial= %d", fact);

    getch();
}