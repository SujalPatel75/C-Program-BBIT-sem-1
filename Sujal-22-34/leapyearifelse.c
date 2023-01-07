#include <stdio.h>
#include<conio.h>

int main ()
{

    int year;


    printf("Enter Any Year ");
    scanf("%d" ,&year);

    if (year%4==0)
    {
        printf("The Year is a leap year ");

    }

    else
    {
        printf("The Year is a not leap year ");
    }

    getch();
}

