#include<stdio.h>
int main()
{
int r1, c1, r2, c2, i, j, k;
printf("Enter rows and column for the first matrix: ");
scanf("%d %d", &r1, &c1);
printf("Enter rows and column for the second matrix: ");
scanf("%d %d", &r2, &c2);
 int arr_1[r1][c1], arr_2[r2][c2];
printf("Enter the first matrix element=\n");
for(i=0;i<r1;i++)
 {
for(j=0;j<c1;j++)
{
scanf("%d",&arr_1[i][j]);
}
 }
printf("Enter the second matrix element=\n");
for(i=0;i<r2;i++)
 {
for(j=0;j<c2;j++)
{
scanf("%d",&arr_2[i][j]);
}
 }
if(c1 == r2)
 {
int mul[r1][c2];
printf("multiply of the matrix=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
mul[i][j]=0;
for(k=0;k<c1;k++)
{
mul[i][j]+=arr_1[i][k]*arr_2[k][j];
}
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
 }
 else
 {
printf("Error! Enter row and column again.");
 }
 return 0;
}
