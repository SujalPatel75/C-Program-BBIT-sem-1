#include<stdio.h>
#include<conio.h>
int main()
{

char ch,low,upper ;

printf("\nEnter any character ");
scanf("%c", &ch);

if (ch>='a' && ch <='z')
{
    upper = ch-32;
    printf("Upper case of %c = %c", ch,upper);
}
    else if (ch>='A' && ch<='Z')
{
    low = ch+32;
    printf("Lower case of %c = %c", ch,low);
    
}
else if(ch>='0' && ch<='9')

{
    printf("you have enter a digit");

}

else{

    printf("You have entered a special character");
}



getch();

}