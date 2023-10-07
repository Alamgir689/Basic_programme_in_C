/*Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
input
a
output
A
input
A
output
a*/

#include<stdio.h>
int main()
{
    char x;
    int ans;
    scanf("%c",&x);
    if(x>='a' && x<='z')
        {
            ans=x-32;
                printf("%c",ans);
        }
   else
   {
       ans=x+32;
       printf("%c",ans);
   }


    return 0;
}
