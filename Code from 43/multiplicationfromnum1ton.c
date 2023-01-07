#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count = 1;
    printf("Enter Number ");
    scanf("%d", &num);

again:
    if (count <= 10)
    {
        printf("%d * %d = %d\n", num, count, num * count);
        count++;
        goto again;
    }

    getch();
}