#include <stdio.h>
int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    int isprime[n];
    for (int i = 2; i <= n; i++)
    {
        isprime[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i] == i && i*i<=n)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (isprime[j] == j)
                    isprime[j] = i;
            }
        }
    }
    int primearr[n];
    for(int i=0; i<n; i++){
        primearr[i] = 0;
    }
    for(int i=2, j=0;i<=n;i++)
    {
        if(isprime[i] == i){
        primearr[j] = isprime[i];
        j++;
        }
    }

    int count = 0;

    for(int i=5 ; i<=n ; i++){
        if(primearr[i] == 0)
        break; 
        else{
            for(int j=0; j<i-1; j++)
            {   
                if(primearr[j]+primearr[j+1]+1 == primearr[i])
                count++;
            }
        }
    }
    for (int i=0;i<n/2;i++)
    {
        printf("%d \n",primearr[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < primearr[i]; j++)
    //     {
    //         if (i == primearr[j] + primearr[j + 1] + 1)
    //         {
    //             count++;
    //         }
    //     }
    // }
    printf("%d",count);

    if (count >= k)
        printf("YES");
    else
        printf("NO");
}