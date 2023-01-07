
#include<stdio.h>
#include<conio.h>
int main()
{

int num,count=1;
printf("Enter Number ");
scanf("%d", &num);

while (count<=num)
{
    if (count %2 ==0)
    {
        printf("%d  ", count);
    }
    count++;
    
    
}
getch();

}