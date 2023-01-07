#include <stdio.h>
#include <conio.h>
int main()
{

    int i, j, arr[5][3];
    printf("Enter values in array \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)

        {
            scanf("%d \n", &arr[i][j]);
        }
    }

    printf("\n\nEven numbers that are present in 2d array:\n");

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 3; j++)

        {
            if (arr[i][j] % 2 == 0)
            {
   printf("%d ", arr[i][j]);
            }
        }

     
    }

    getch();
}