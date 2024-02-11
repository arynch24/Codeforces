#include<stdio.h>
int isprime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t-->0)
    {
        int flag=0;
        scanf("%d %d",&x,&y);
        for (int i=2;;i++)
        {
            if(isprime(i)==1)
            {
                if(y=x-i)
                flag=1;
            }
        }
        if (flag=1)
        printf("YES");
        else
        printf("NO");
    }
}