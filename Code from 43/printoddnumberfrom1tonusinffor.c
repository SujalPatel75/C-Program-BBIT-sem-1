#include<stdio.h>
#include<conio.h>
int main()
{

int num,count=1;
printf("Enter Number ");
scanf("%d", &num);

for ( count=1; count<=num; count++ )
{
    
    if (count%2==1)
    {
        printf("%d ",count);
    }
    
}



getch();

}