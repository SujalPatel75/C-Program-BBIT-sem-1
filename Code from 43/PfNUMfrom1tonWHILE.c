#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count = 1;
    printf("Enter Number ");
    scanf("%d", &num);

    while (count <= num)
    {
        printf("%d\n", count);
        count++;
    }

    getch();
}