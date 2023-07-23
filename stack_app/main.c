#include <stdio.h>
#include <stdlib.h>

int main()
{
   char infix[]="1+2*3$4/5+6";
   char postfix[80];
   InfixToPostfix(infix, postfix);
   printf("\n %s", postfix);
   getch();

    return 0;
}
