#include<stdio.h>
#include<conio.h>
int main()
{

int i,j, arr[3][2]= {12,3,54,72,4,2};

for ( i = 0; i < 3 ; i++)
{
   for ( j = 0; j<2; j++)
   {
    printf(" n%2d" ,arr[i][j]);
   }
   printf("\n");
   

}



getch();

}