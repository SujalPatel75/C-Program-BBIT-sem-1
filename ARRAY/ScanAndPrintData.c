#include <stdio.h>
#include <conio.h>
int main()
{

    int i,j, arr[3][2];
    printf("Enter values in array \n");
    for (i = 0; i < 3; i++)
    {
        /* code */
        scanf("%d \n", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        /* code */
        printf("\n arr[%d]=%d\n", i, arr[i]);
    }

    getch();
}