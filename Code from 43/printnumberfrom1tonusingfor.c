#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count;

    printf("Enter number  ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++)
    {
        printf("%d  ", count);
    }

    getch();
}