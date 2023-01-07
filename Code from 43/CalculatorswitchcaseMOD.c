#include<stdio.h>
#include<conio.h>
int main()
{

int oper;
int n01,n02;



printf(" \n For addition press 1\n For subtraction press 2\n For division press 3\n For multiplication press 4\n For modulo press 5\n\n");
printf("\nEnter any arithmetic operation ");
scanf("%d", &oper);


printf("Enter any number ");
scanf("%d", &n01);


printf("Enter any number ");
scanf("%d", &n02);



switch (oper)
{
case 1 : printf("\n%d+%d= %d",n01,n02,n01+n02);
    break;

case 2 : printf("\n%d-%d= %d",n01,n02,n01-n02);
break;

case 4 : printf("\n%d*%d= %d",n01,n02,n01*n02);
break;

case 3 : printf("\n%d/%d= %d",n01,n02,n01/n02);
break;
case 5 : printf("\n%d%%%d= %d",n01,n02,n01%n02);
break;


default:printf("\nInvalid arithmetic operation,Try again ");
    break;
}

getch();

}