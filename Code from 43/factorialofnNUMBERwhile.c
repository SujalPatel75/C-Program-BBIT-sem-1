#include<stdio.h>
#include<conio.h>
int main()
{

int num, fact=1, count=1;
printf("Enter Number ");
scanf("%d", &num);

while (count <= num)
{
    fact= fact*count;
    count++;
    

}

printf("Factorial= %d", fact);
getch();


}