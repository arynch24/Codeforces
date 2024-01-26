#include<stdio.h>
int main()
{
    
    int a[5][5];
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        scanf("%d",&a);
    }
    int count =0;
    while(a[3][3]!=0)
    {
        for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        
        count++;
    }

    }
   printf("%d",count);
    return 0;
}