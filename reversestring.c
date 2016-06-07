#include<stdio.h>
#include<string.h>
int main()
{
  char a[50];
  printf("Enter the string:");
  gets(a);
  strrev(a);
  printf("the reverse string\n %s\n",a);
  return 0;
}
