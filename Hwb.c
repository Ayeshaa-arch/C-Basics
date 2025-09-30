#include<stdio.h>
#include<ctype.h>
//program to check if given character is digit or not

int main () {
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    if (isdigit(ch)) 
       printf("The character '%c' is a digit.\n ", ch);
            else 
                 printf("The character '%c' is NOT a digit.\n", ch);
   return 0; 
}
