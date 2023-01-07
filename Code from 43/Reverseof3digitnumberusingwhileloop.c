#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{

int num,count=0,rev=0;


printf("Enter any number ");
scanf("%d",&num);

int copyofn=num;

while (num>0)
{
 num=num/10;
 count++;   /* code */
}

while (copyofn>0)
{
   rev=(rev+(copyofn%10)*pow(10,count-1));
   copyofn=copyofn/10;
   count--;
    /* code */
}

printf("Reverse of your given number = %d",rev);

getch();

}