#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count = 1;
    printf("Enter Number ");
    scanf("%d", &num);

    do
    {
        printf("%d\n", count);
        count++;

    } while (count <= num);

    getch();
}