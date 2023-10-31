/*
Problem Statement

You will be given a positive integer N, you need to print a pattern shown below using this N.

For example: If N=5, the pattern will look like below.

image

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 100
Output Format

Output the pattern.
Sample Input 0

4
Sample Output 0

   #
  ---
 #####
-------
 #####
  ---
   #
Sample Input 1

1
Sample Output 1

#
Sample Input 2

7
Sample Output 2

      #
     ---
    #####
   -------
  #########
 -----------
#############
 -----------
  #########
   -------
    #####
     ---
      #
*/
#include<stdio.h>
int main()
{
int n,s,k;
scanf("%d",&n);
s=n-1;
k=1;
for(int i=0;i<(2*n)-1;i++)
{
    for(int j=0;j<s;j++)
    {
        printf(" ");
    }
     for(int j=0;j<k;j++)
    {
        if(i%2==1)
        {
            printf("-");
        }
        else
       {
            printf("#");
       }
    }
    if(i<n-1)
    {
      k=k+2;
      s--;
    }
    else
    {
          k=k-2;
        s++;
    }
printf("\n");
}



return 0;
}
