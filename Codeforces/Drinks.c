
#include<stdio.h>s
int main()
{
    int n;
    float sum=0,ans,p;
    scanf("%d",&n);
    int k=n;
    while(n-->0)
    {
        scanf("%f",&p);
        sum+=p;
    }
    ans=sum/k;

    printf("%f",ans);
}