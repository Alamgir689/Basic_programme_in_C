/*
Problem Statement

Given the multiplication of four numbers and three of those numbers, find the missing number.

Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

Input Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
Constraints

1 < T <= 100000
0 <= M <= 10^18
1 <= A, B, C <= 10^6
Output Format

Print the missing number. Don't forget to print a new line after it.
Sample Input 0

4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15
Sample Output 0

5
-1
-1
0
Sample Input 1

3
20 5 1 1
18 2 3 3
0 10 20 30
Sample Output 1

4
1
0
*/
#include<stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     for(int i=0;i<t;i++)
     {
          long long int m,a,b,c,d,r,s;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
    
        if (a==0 || b==0 || c==0)
        {
            printf("-1\n");
            break;
        }

         d=a*b*c;
         s=m/d;
        r=m%d;

        if(r==0)
        {
            printf("%lld\n",s);
        }

        else 
        {
            printf("-1\n");
        }
         
     }


return 0;
}