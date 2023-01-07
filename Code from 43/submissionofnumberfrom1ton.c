
#include <stdio.h>
#include <conio.h>
int main()
{

    int num, count = 1, sum = 0;
    printf("Enter Number");
    scanf("%d", &num);

again:
    if (count <= num)
    {
        sum = sum + count;
        count++;
        goto again;
    }

    printf("Sum=%d", sum);

    getch();
}