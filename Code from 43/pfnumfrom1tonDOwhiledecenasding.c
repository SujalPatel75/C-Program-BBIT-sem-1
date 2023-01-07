#include<stdio.h>
#include<conio.h>
int main()
{

int num, count=11;
printf("Enter Number ");
scanf("%d", &num);

do
{
    printf("%d\n", num);
    num --;
    

} while (count <= num);


getch();

}