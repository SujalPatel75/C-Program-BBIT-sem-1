#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char name[100] ;
int length=0,i;

puts("Enter your name here");
gets(name);

for(i = 0; name[i] != '\0'; i++)
{
    length = length + 1;
    
}
printf("The length of string= %d ", length);
getch();

}