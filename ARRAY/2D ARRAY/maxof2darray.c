#include <stdio.h>
#include <conio.h>
int main()
{

    int i, j, arr[5][3], max = 0;
    printf("Enter values in array \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            /* code */ if (arr[i][j] > max)

            {
                /* code */ max = arr[i][j];
            }
        }
    }

    printf("\nMax= %d", max);
    getch();
}