#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char name[100]="Sujal", surname[100]="Patel";

strcat(name," ");
strcat(name,surname);

puts(name);

getch();

}