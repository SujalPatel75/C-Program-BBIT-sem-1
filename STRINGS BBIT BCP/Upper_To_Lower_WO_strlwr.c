#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char name[100];
int i;

puts("Enter Your Name");
gets(name);

for(i = 0; name[i] != '\0'; i++)
{
    if(name[i]>='A' && name[i]<='Z')

    name[i] = name[i] + 32;
}

printf("Your name in Lower Case is %s", name);

getch();

}