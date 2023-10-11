/*
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
input
a
output
b
Note
The next letter to z is a.
*/
#include<stdio.h>
int main()
{

char n;
scanf("%c",&n);
if(n>=97 && n<=121)
    printf("%c",n+1);
else if(n==122)
printf("a");
return 0;
}
