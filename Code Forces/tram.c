#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,j,rem=0,arr[t];
    for (int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&j);
        rem = (rem - n) + j ; 
        arr[i] = rem;
    }
    // while(t-- > 0)
    // {
    //     scanf("%d %d",&n,&j);
    //     rem-=n;
    //     rem+=j;
    //     arr[t]=rem;
    //     printf("%d\n",rem);
    // }
    int max=arr[0];
//    printf("%d  %d",arr[0],arr[1]);

    for(int i=0 ;i<t;i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}