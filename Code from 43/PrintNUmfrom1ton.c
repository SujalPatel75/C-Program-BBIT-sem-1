#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count = 1;
    printf("Enter Number ");
    scanf("%d", &num);

again:
    if (count <= num)
    {
        printf("%d ", count);
        count++;
        goto again;
    }

    getch();
}