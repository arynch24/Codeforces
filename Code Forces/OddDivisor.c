#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-->0) 
    {
        long long n;
        scanf("%lld", &n);
        if (n % 2 == 1) 
        {
            printf("YES\n");
        }
        else 
        {
            while (n % 2 == 0) 
            {
                n /= 2;
            }
            if (n > 1) 
            {
                printf("YES\n");
            } else 
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
