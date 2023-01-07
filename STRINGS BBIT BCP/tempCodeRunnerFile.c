#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char name1[10] = "AJAY", name2[10] = "Aeewj";

int ans;
ans = strcmp(name1, name2);

if (ans == 0)
printf("Both string are diffrent");
else printf("Both string are same");

getch();

}