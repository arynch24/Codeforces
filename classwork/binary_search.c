#include <stdio.h>
int main()
{
    int target = 6;
    int low = 0, high = target - 1,ans;
    int arr[5]={2,4,5,9,11};
    while (low <= high)
    {
        int mid = ((low + high)/2);
        if (arr[mid] == target)
        {
            ans= mid;
        }
        else if (arr[mid] >= target)
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
