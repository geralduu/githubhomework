#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    int fir,last,i,ans;
    while(scanf("%d",&fir)!=EOF)
    {
        scanf("%d",&last);
        ans=0;
        for(i=fir; i<=last; i++)
        {
            if(i%2!=0)
                ans=ans+i;
        }
        printf("%d\n",ans);
    }
    return 0;
}
