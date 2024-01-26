#include <stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    
        scanf("%s",str);
    
      int a=str[0];
if (a>96)
{
    str[0] = a-32;
}
printf("%s",str);
}