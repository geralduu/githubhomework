#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
int num,i,n,ans;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        //printf("%d",num);
        ans=1;
        for(i=1;i<=num;i++)
        {
            ans=ans*i;
        }
        printf("%d\n",ans);
    }

    return 0;
}
