#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char original_filename[50]= "Sujal Rakeshbhai Patel", copy[50];

strcpy(copy,original_filename);

puts("original_filename= ");
puts(original_filename);
puts("copied string= ");
puts(copy);


getch();

}