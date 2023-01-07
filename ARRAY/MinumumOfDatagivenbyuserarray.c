#include <stdio.h>
#include <conio.h>
int main()
{

    int i, arr[5], min;
    printf("Enter values in array \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d \n", &arr[i]);
    }
    min = arr[0][0];
    for (i = 0; i < 5; i++)
    {
        /* code */ if (arr[i] < min)
        {
            /* code */ min = arr[i];
        }
    }

    printf("\nMin= %d", min);
    getch();
}