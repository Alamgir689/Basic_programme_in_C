/*
Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
input
4
output
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Note
Don't print any extra spaces after symbol " * ".


*/
#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(int i=1;i<=n*2;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            k=k+2;
            s--;
        }
        else
            if(i>n)
        {
            k=k-2;
            s++;
        }
        printf("\n");
    }



return 0;
}
