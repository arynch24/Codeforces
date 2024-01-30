#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,j,rem=0,arr[t];
    // for (int i=0;i<t;i++)
    // {
    //     scanf("%d %d",n,j);
    // }
    while(t-->0)
    {
        scanf("%d %d",n,j);
        rem+=n;
        rem-=j;
        arr[t]=rem;
    }
    int max=arr[0];

    for(int i=1;i<=t;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}