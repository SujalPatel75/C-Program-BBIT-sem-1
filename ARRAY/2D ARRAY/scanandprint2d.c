#include<stdio.h>
#include<conio.h>
int main()
{

int i,j, arr[3][2];
printf("Enter values of 2d array");

for ( i = 0; i < 3 ; i++)
{
   for ( j = 0; j<2; j++)
   {
    scanf(" %d" ,arr[i][j]);
   }

}
printf("\n\n Values of 2d array are as below\n");

for ( i = 0; i < 3 ; i++)
{
    for ( j = 0; i < 2; i++)
    {
        printf(" %d  " ,arr[i][j]);
    }
printf("\n");    
}


getch();

}