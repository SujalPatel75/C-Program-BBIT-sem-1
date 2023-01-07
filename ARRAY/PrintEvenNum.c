#include <stdio.h>
#include <conio.h>
int main()
{

    int i, arr[5] ;
    printf("Enter values in array \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d \n", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
       if  (arr[i]%2 ==0)
       
        printf("%d ", arr[i]);
       
    }

   
    getch();
}