#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char name[50];
printf("Enter your name \n");

gets(name);
printf("Your name is ");
puts(strlwr(name));

getch();

}