#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

int i,j;
char name[100], reverse[100];
puts("Enter your name: ");
gets(name);

for(i=strlen(name)-1, j=0;i>=0 ;i--,j++)
{
    reverse[j] = name[i];
}
reverse[j] = '\0';

printf("Reverse of string ");
puts(reverse);

getch();

}