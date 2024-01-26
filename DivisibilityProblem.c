#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int z=(b-(a%b))%b;
        printf("%d\n",z);
    }
    return 0;
}
//(b−(amodb))modb