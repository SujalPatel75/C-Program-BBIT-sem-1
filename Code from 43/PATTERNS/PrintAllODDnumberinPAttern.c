#include<stdio.h>
#include<conio.h>
int main()
{

int count,i,j;

for(i=1;i<5;i++)
{
  count =1;
  for ( j = 1; j<=i; j++ )
  {
    /* code */printf("%d ",count);
    count = count +2;
  }
  printf("\n");
}


getch();

}

 



