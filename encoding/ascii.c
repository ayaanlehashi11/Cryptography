
#include <stdio.h>

int main(int argc , char ** argv)
{
   char ch;
   printf("Enter the string to be converted to it's corresponding int value: ");
   scanf("%c" , &ch);
   // %d displays the integer value of a character
   // %c the character
   printf("the ascii value of the c variable is " , ch);
}
