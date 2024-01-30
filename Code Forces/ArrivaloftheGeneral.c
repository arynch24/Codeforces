#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    int indmax,indmin;
    for(int i=1;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            indmax=i;
        }
        else if (arr[i]<=min)
        {
            min=arr[i];
            indmin=i;
        }
    }
    // printf("%d %d \n",max,indmax);
    // printf("%d %d \n",min,indmin);
    int ans=indmax+(n-1-indmin);
    if (indmin<indmax)
    printf("%d",ans-1);
    else
    printf("%d",ans);
}


