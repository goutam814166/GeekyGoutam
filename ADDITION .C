#include<stdio.h>
void main()
{
int arr[5][5],arr1[5][5],arr2[5][5];
printf("Enter the  value of 1st matriex");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
scanf("%d",&arr[i][j]);
}
printf("Enter the  value of 2st matriex");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
scanf("%d",&arr1[i][j]);
}
printf(" The  value of 1st matriex");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}
printf(" The  value of 2nd  matriex");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("%d",arr1[i][j]);
}
printf("\n");
}
arr2[5][5]=arr[i][j]+arr1[i][j];

for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}
