#include<stdio.h>
#include<conio.h>
int main()
{

int i,a=1,number,count;
printf("Enter a number ");
scanf("%d", &number);

while ((a<=number))
{
    /* code */
    count=0;
    i =2;

    while (i<=a/2)
    {
        /* code */if (a%i==0)

        {
            count++;
            break;/* code */
        }
        i++;
    }
    
    if(a!=1 && count==0)
    {
        printf(" %d",a);
    }
    a++;
}

getch();

}






