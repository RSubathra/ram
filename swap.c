#include <stdio.h>
#include <string.h>
int main()
{
     char str[20],tmp;
     int i;
     clrscr();
     printf("Enter a string: \n");
     scanf("%s",str);
    for(i=0;i<strlen(str);i=i+2)
     {
      tmp = str[i];
      str[i] = str[i+1];
      str[i+1] = tmp;
     }
     printf("\nAfter Swap String: %s",str);
     return 0;
}
