#include<stdio.h>
#include<conio.h>
int main()
{

int no1,no2,no3;


    printf("Enter Any Number ");
    scanf("%d" ,&no1);


    printf("Enter Any Number ");
    scanf("%d" ,&no2);

     printf("Enter Any Number ");
    scanf("%d" ,&no3);

    if (no1 > no2)
       {
        if (no1 > no3)
        {
        printf("Number 1 is max");
       }

       else {
        printf("Number 3 is max");

       }
       }  

    else {
        if (no2 > no3)

        { printf("Number 2 is max");
            /* code */
        }
        else
        {
            printf("Number 3 is max");
        }
        
       }
    


getch();


}