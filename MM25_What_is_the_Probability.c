#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int n,m,round,i;
    double p,ans,temp;
    while(scanf("%d",&round)!=EOF)
    {
        //printf("%d\n",round);
        while(round--)
        {
            scanf("%d%lf%d",&n,&p,&m);
            //printf("%d %lf %d ",n,p,m);
            if(p<0.0001)
                printf("%lf\n",p);
            else
            {
                temp=1;
                for(i=0; i<m-1; i++)
                    temp=temp*(1-p);
               // printf("temp %.4lf\n",temp);
                ans=temp*p;
                //printf("%.4lf\n",ans);
                temp=1;
                for(i=0; i<n; i++)
                    temp=temp*(1-p);
                ans=ans/(1-temp);
            }

            printf("%.4lf\n",ans);
        }

    }
    return 0;
}
