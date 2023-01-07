#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char original_filename[6]= "NAYAN", copy[6];
int  ans;

strcpy(copy,original_filename);
strrev(copy);
puts("Reverse of copy:");
puts(copy);

ans = strcmp(original_filename,copy);
if (ans == 0)
{
    puts("Palindrome");
}
else 
{

    puts("Not Palindrome");
}




getch();

}