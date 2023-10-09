/*
Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

Input
The input contains several passwords.

Each line contains a number X (103 ≤ X ≤ 104 - 1).

Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

Example
input
2200
1020
1999
1000
9999
output
Wrong
Wrong
Correct

*/
#include<stdio.h>
int main()
{
int a,i;
while(scanf("%d",&a)!=0)
{
    if(a==1999)
    {
        printf("Correct");
        break;
    }
    else
        printf("Wrong\n");
}




return 0;
}
