#include <stdio.h>

int main()
{
    int num;
    int arr[4] = {0, 0, 0, 0};
    scanf("%d",&num);

for(int i=num+1;;i++)
    {
        for(int j=0, temp = i ; j<=3 ; j++, temp/=10)
        {
            arr[j] = temp % 10;
        }
        if(arr[0]!=arr[1]&&arr[0]!=arr[2]&&arr[0]!=arr[3]&&arr[1]!=arr[2]&&arr[2]!=arr[3]&&arr[1]!=arr[3])
        {
           for(int i=3;i>=0;i--)
           {
               printf("%d",arr[i]);
           } 
           break;
        }
    }
    return 0;
}