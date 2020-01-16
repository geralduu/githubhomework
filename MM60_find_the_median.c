#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("filename.txt", "r", stdin);
    #endif
    //freopen("test.txt", "r", stdin);
    int i=0,a[10000]={0};
    //int j;
    double ans;
    while (scanf("%d",&a[i])!= EOF)
    {
        //printf("%d:%d ",i,a[i]);
        i++;
        while(1)
        {
          if(scanf("%d",&a[i])== EOF )
          {i--; break;}
          if( getchar() == '\n')
            break;
          //printf("%d:%d ",i,a[i]);
          i++;
        }
        /*printf("\n");
        for(j=0; j<=i; j++)
            printf("%d ",a[j]);
        printf("\n");*/
        qsort(a,i+1, sizeof(int), cmpfunc);
        /*for(j=0; j<=i; j++)
            printf("%d ",a[j]);
        printf("\n");
        printf("i=%d\n",i);*/
        if(i%2==0)//odd
        {
            ans=a[(i/2)];
            printf("Median=%.0lf\n",ans);
        }
        else
        {
            ans=(double)((double)(a[(i+1)/2-1]+(double)a[(i+1)/2])/2);
            printf("Median=%.1lf\n",ans);
        }
        i=0;

    }

    return 0;
}
