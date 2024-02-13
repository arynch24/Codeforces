// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t-- > 0)
    {
        int n;
        scanf("%d", &n);
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if (sum % n == 0)

        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    while (i < j && arr[i] < arr[j])
                    {

                        arr[i] -= 1;
                        arr[j] += 1;
                    }
                }
            }
            int flag = 0;
            for (int i = 1; i < n; i++)
            {
                if (arr[0] != arr[i])
                {
                    flag = 1;
                }
            }
            if (flag = 1)
            {
                printf("NO\n");
            }
            else if (flag = 0)
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}