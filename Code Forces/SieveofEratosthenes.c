#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int isprime[n];
    for(int i=2;i<=n;i++)
    {
        isprime[i]=i;
    }
    for (int i=2;i<=n;i++)
    {
        if(isprime[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(isprime[j]==j)
                isprime[j]=i;
            }
        }
    }

//for all prime numbers
 
    // for(int i=2;i<=n;i++)
    // {
    //     if(isprime[i]==i)
    //     printf("%d  ",isprime[i]);
    // }


//for prime factorization
    while(n!=1)
    {
        printf("%d",isprime[n]);
        n=n/isprime[n];
        if(n>1)
        printf("*");
    }


}