/*
One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
) between the other three numbers; so that each operator is used only once.

a□b□c=d
Can you solve this tricky puzzle for him?
Input
Only one line containing four numbers a
, b
, c
 and d
 (−109≤a,b,c≤109
),(−1018≤d≤1018
).

Output
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

Examples
input
3 4 5 23
output
YES
input
9 5 3 7
output
YES
input
1 2 3 1
output
NO
*/#include<stdio.h>
int main()
{
int a,b,c,d,r;
scanf("%d %d %d %d",&a,&b,&c,&d);

if (a+b*c==d)
{
    printf("YES");
}
 else if(d==a-b+c)

    {
    printf("YES");
    }

     else if(a*b+c==d)
     {
    printf("YES");
    }

         else if(a-b*c==d)
            {
    printf("YES");
    }

     else if(a+b-c==d)
    {
    printf("YES");
    }

else
{
    printf("NO");
}


}



