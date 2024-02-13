// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t-- > 0)
    {
        int x,y,n,count = 0;
        scanf("%d %d %d", &n, &x, &y);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
       
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if ((arr[i] + arr[j]) % x == 0 && (arr[i] - arr[j]) % y == 0)
                    {
                        count++;
                    }
            }
        }
        printf("%d \n", count);
        count = 0;
    }

    return 0;
}