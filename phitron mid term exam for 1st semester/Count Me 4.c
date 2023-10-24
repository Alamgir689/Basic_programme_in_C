/*
Problem Statement

You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.

Input Format

Input will contain only S.
Constraints

1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Ouput in the format show in the sample output.
Sample Input 0

thefoxisbrave
Sample Output 0

a - 1
b - 1
e - 2
f - 1
h - 1
i - 1
o - 1
r - 1
s - 1
t - 1
v - 1
x - 1
Sample Input 1

dotheyloveme
Sample Output 1

d - 1
e - 3
h - 1
l - 1
m - 1
o - 2
t - 1
v - 1
y - 1
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,value;
char a[10000];
scanf("%s",a);
int cnt[26]={0};
for(i=0;i<strlen(a);i++)
{
    value= a[i]-'a';
    cnt[value]++;
}
for(i=0;i<26;i++)
{
    if(cnt[i]!=0)
        printf("%c - %d\n",i+'a',cnt[i]);
}


return 0;
}
