#include <stdio.h>
#include<conio.h>

int main ()
{

    int number;


    printf("Enter Any Random Number ");
    scanf("%d" ,&number);

    if (number%2==0)
    {
        printf("The number is even number ");

    }

    else
    {
        printf("The number is odd number");
    }

    getch();
}