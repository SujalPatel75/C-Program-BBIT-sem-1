#include <stdio.h>
#include <conio.h>
int main()
{

    int i, arr[5], sum=0;
    printf("Enter values in array \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d \n", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum=sum + arr[i];
    }

    printf("sum = %d \n", sum);
    getch();
}