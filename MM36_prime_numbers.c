#include <stdio.h>
#include <stdlib.h>
int prime[5000]= {0};
int mark[46341]= {0};


void make()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int i, j, count=1;
    for(i=4; i<=46340; i+=2)
        mark[i]=1;
    prime[0]=2;
    for(i=3; i<=46340; i+=2)
    {
        if(!mark[i])
        {
            prime[count++] = i;
            for(j=2; i*j<=46340; j++)
                mark[i*j] = 1;
        }
    }
}


int check(int num)
{
    int i;
    if(num<=46340)
        return mark[num];
    else if(num%2==0)
        return 1;
    else if(num%3==0)
        return 1;
    //ÆäðNÍ¸ß^Ù|”µ±íÅÐ”à
    else
    {
        for(i=0; prime[i]*prime[i]<=num && prime[i]!=0; i++)
        {
            if(num % prime[i] == 0)
                return 1;
        }
        return 0;
    }
}

int main()
{
    int num;
    make();
    while((scanf("%d", &num))&&num)
    {
        int i, ans=0;
        for(i=2; i<num; i++)
        {
            if(!check(i))
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
