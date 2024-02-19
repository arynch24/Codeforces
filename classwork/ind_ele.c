#include <stdio.h>
int main()
{
    
    int low = 0, high = 4,ans;
    int arr[5]={-10,-5,0,3,7};
    while (low <= high)
    {
        int mid = ((low + high)/2);
        if (arr[mid] == mid)
        {
            ans= mid;
        }
        else if (arr[mid] >= mid)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    printf("%d",ans);
}
