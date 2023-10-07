/*Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:

Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc
Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

Examples
input
A
output
ALPHA
IS CAPITAL
input
9
output
IS DIGIT*/
#include<stdio.h>
int main()
{
    char x;
    int ans;
    scanf("%c",&x);
    if(x>='0' && x<='9')
    {
        printf("IS DIGIT\n");

    }
    else
    {
        printf("ALPHA\n");
        if(x>='a' && x<='z')
        {
            printf("IS SMALL");
        }
   else
   {
       printf("IS CAPITAL");
   }

}
return 0;
}
