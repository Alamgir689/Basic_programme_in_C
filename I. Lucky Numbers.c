/*
A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99)
.

Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
input
39
output
YES
input
64
output
NO
*/
#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
b=a%10;
c=a/10;
if(b%c==0 || c%b==0)
{
    printf("Yes");
}
else
{
    printf("No");
}

return 0;
}
