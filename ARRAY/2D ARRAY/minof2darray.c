#include <stdio.h>
#include <conio.h>
int main()
{

    int i, j, arr[5][3], min;
    printf("Enter values in array \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    min = arr[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    printf("\nMin= %d", min);
    getch();
}