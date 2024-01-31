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
    int indmax=0;
    int indmin=0;
    for(int i=1;i<n;i++)
    {
        if (arr[i]>arr[indmax])
        {
            indmax=i;
        }
        if (arr[i]<=arr[indmin])
        {
            indmin=i;
        }
    }
    
    int ans=indmax+(n-1-indmin);
    if (indmin<indmax)
    {ans--;}
    
    printf("%d",ans);
}


