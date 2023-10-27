/*
Given a number N. Print a pyramid that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
inputCopy
4
outputCopy
   *
  ***
 *****
*******
Note
Don't print any extra spaces after symbol " * ".
*/
#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }

        k=k+2;
        s--;
        printf("\n");
    }



return 0;
}
