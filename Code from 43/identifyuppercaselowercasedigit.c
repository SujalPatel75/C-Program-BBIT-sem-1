#include<stdio.h>
#include<conio.h>
int main()
{

char ch;

printf("Enter any key ");
scanf("%c", &ch);

switch (ch)
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u': printf("\n You have entered a vowel");
    break;
case 'B' :
case 'C' :
case 'D' :

case 'F' :
case 'G' :
case 'H' :
case 'J' :
case 'K' :
case 'L' :
case 'M' :
case 'N' :
case 'P' :
case 'Q' :
case 'R' :
case 'S' :
case 'T' :
case 'V' :
case 'W' :
case 'X' :
case 'Y' :
case 'Z' :

case 'b' :
case 'c' :
case 'd' :
case 'f' :
case 'g' :
case 'h' :
case 'j' :
case 'k' :
case 'l' :
case 'm' :
case 'n' :
case 'p' :
case 'q' :
case 'r' :
case 's' :
case 't' :
case 'v' :
case 'w' :
case 'x' :
case 'y' :
case 'z' : printf("you have entered a consonant ");

case '1' :
case '2' :
case '3' :
case '4' :
case '5' :
case '6' :
case '7' :
case '8' :
case '9' : printf("you have entered a digit");
break;

default:printf("You have entered a special character");
    break;
}


getch();

}