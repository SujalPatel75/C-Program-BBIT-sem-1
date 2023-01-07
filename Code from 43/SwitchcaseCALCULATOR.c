#include<stdio.h>
#include<conio.h>
int main()
{

char oper;
int n01,n02;



printf(" \n For addition press +\n For subtraction press -\n For division press /\n For multiplication press *\n For modulo press %%\n\n");
printf("\nEnter any arithmetic operation ");
scanf("%c", &oper);


printf("Enter any number ");
scanf("%d", &n01);


printf("Enter any number ");
scanf("%d", &n02);



switch (oper)
{
case '+' : printf("\n%d+%d= %d",n01,n02,n01+n02);
    break;

case '-' : printf("\n%d-%d= %d",n01,n02,n01-n02);
break;

case '*' : printf("\n%d*%d= %d",n01,n02,n01*n02);
break;

case '/' : printf("\n%d/%d= %d",n01,n02,n01/n02);
break;
case '%' : printf("\n%d%%%d= %d",n01,n02,n01%n02);
break;


default:printf("Invalid arithmetic operation,Try again ");
    break;
}

getch();

}