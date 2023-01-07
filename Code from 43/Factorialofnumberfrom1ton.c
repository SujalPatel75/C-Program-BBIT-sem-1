
#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count = 1, fact = 1;
    printf("Enter Number ");
    scanf("%d", &num);

again:
    if (count <= num)
    {
        fact = fact * count;
        count++;
        goto again;
    }

    printf("\nFactorial= %d", fact);

    getch();
}