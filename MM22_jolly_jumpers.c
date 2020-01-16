#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("filename.txt", "r", stdin);
    #endif
    int n,a,b,m,temp;
    int x[3000],y[3000];
    while(scanf("%d",&n)==1)
    {
        temp=0;
        for(a=0; a<n; a++)
        {
            scanf("%d",&m);
            x[a]=m;
        }
        for(a=0; a<n-1; a++)
        {
            y[a]=abs(x[a]-x[a+1]);
        }
        for(a=1; a<=n-1; a++)
        {
            for(b=0; b<n-1; b++)
            {
                if(y[b]==a)
                {
                    temp++;
                    b=-1;
                    break;
                }
            }
        }
        if(temp==n-1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
