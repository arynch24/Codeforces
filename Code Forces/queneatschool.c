#include <stdio.h>
int main()
{
    int n,t;
    
    scanf("%d %d",&n,&t);
    char str[51];
    scanf("%s",str);
    while(t-->0)
    {
        for (int i=0;i<n-1;i++)
        {
            if (str[i]=='B' && str[i+1]=='G')
        {
            char temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                i++;
        }
        
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
}
