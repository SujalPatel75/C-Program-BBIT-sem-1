#include<stdio.h>
#include<conio.h>
int main()
{

int no1,no2 ;


    printf("Enter Any Number ");
    scanf("%d" ,&no1);


    printf("Enter Any Number ");
    scanf("%d" ,&no2);

    if (no1==no2)
    {
        printf("Both Number are same ");    
    }
     else {
        if (no1 > no2)
        printf("Number 1 is max ");
        else {
            printf("Number 2 is max");
        }
     }



getch();


}