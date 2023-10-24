/*
Problem Statement

You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

Input Format

First line will contain T, the number of test cases.
Each test case will contain only S.
Constraints

1 <= T <= 1000
1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
Sample Input 0

2
theFox25IsBrave
ILoveYou100TimesAndSay2Also
Sample Output 0

3 10 2
7 16 4
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
     int c=0,s=0,d=0,i;
     char a[10000];
     scanf("%s",a);
     char ch=0;
     for(i=0;a[i]!='\0';i++)
     {
         ch=a[i];
         if(ch>='A' && ch<='Z')
         {
             c ++;
         }
         else if(ch>='a' && ch<='z')
         {
             s ++;
         }
         else if(ch>='0' && ch<='9')
         {
             d ++;
         }
     }
            printf("%d %d %d\n",c,s,d);
    }
return 0;
}
