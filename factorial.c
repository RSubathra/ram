#include<stdio.h>
int main()
{
 int n,i,l=1;
 printf("Enter the no:\n");
 scanf("%d",&n)
 for(i=1;i<n;i++)
 l=l*i;
 printf("%d the factorial is:%d",n,l);
 return 0;
 }
