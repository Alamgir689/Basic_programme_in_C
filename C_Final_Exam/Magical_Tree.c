/*
Problem Statement

Jingle Bells, Jingle Bells - It's Christmas today! Ranja, our little friend, is all excited, but there's just one thing missing: a Christmas tree.

Ranja will provide us with the size of the tree, N, and we'll work our holiday magic to print out that perfect tree. Let's make Ranja's Christmas tree dreams come true!

You should see the sample input output to understand how the tree looks like.

Input Format

Input will contain only N.
Constraints

1 <= N <= 21 ; and N is odd.
Output Format

Output the tree of size N.
Sample Input 0

1
Sample Output 0

     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *
Sample Input 1

3
Sample Output 1

      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***
     ***
Sample Input 2

5
Sample Output 2

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
     *****
     *****
     *****
     *****
     *****
Submissions: 365
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More

*/
#include<stdio.h>
int main()
{
     int n,f;
scanf("%d",&n);
f=((n-1)/2)+6;
int k=1;
int s=f-1;
for (int i=0;i<f;i++)
{
    for (int j=1;j<=s;j++)
    {
        printf(" ");
    }
    for(int j=1;j<=k;j++)
    {
        printf("*");
    }
    printf("\n");

    k=k+2;
    s--;

}
for(int i=0;i<5;i++)
{
    for(int j=1;j<=5;j++)
    {
        printf(" ");
    }
    for(int j=0;j<n;j++)
    {
        printf("*");
    }
    printf("\n");
}
// for(int i=0;i<1;i++)
// {
//     for(int j=1;j<=5;j++)
//     {
//         printf(" ");
//     }
//     for(int j=0;j<n;j++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }



return 0;
}