#include<stdio.h>
int main()
{
    int t,s[1000],ans=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&s);
    }
    
    for(int i=1;i<t;i++)
    {
        int count1=0,count2=0;

        for (int j=0;j<i;j++)
        {
            if(s[i]>=s[j])
            count1++;
            else if(s[i]<=s[j])
            count2++;
        }
      
        if (count1==i||count2==i)
        ans++;
        
    }
    printf("\n %d",ans);
}