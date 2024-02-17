#include <stdio.h>
int main() 
{
    int arr[6],n,ind;
    printf("Enter numbers in an array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the number to insert:");
    scanf("%d",&n);
    
    arr[5]=n;
    for (int i=0;i<5;i++)
    {
        if( arr[i]>n && arr[i-1]<=n) 
        ind=i;
    }
    for (int i=5;i>=ind;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[ind]=n;
    for (int i =0;i<6;i++)
    {
    printf("%d ",arr[i]) ;   
    }
    
    return 0;
    
}
