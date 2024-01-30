#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int points[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &points[i]);
    }

    int Count = 0;
    int high = points[0];
    int low = points[0];

    for (int i = 1; i < n; i++) {
        if (points[i] > high) {
            high = points[i];
            Count++;
        } else if (points[i] < low) {
            low = points[i];
            Count++;
        }
    }

    printf("%d\n", Count);

    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int t,s[1000],ans=0;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         scanf("%d",&s);
//     }
    
//     for(int i=1;i<t;i++)
//     {
//         int count1=0,count2=0;

//         for (int j=0;j<i;j++)
//         {
//             if(s[i]>=s[j])
//             count1++;
//             else if(s[i]<=s[j])
//             count2++;
//         }
//       printf("%d %d %d \n",i,count1,count2);
//         if (count1==i||count2==i)
//         ans++;
//     }

//     printf("%d",ans);
// }