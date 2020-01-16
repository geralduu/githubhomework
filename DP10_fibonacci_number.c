#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    long long num[50]= {0};
    int n, i, ncase;
    num[1]=num[2]=1;//fibonacci 1 1 2 3 5 8 13....
    for(i=3; i<=45; i++)//at most 45
        num[i]=num[i-2]+num[i-1];
    scanf("%d", &ncase);
    while(ncase--)
    {
        scanf("%d", &n);// print the nth fibonacci
        printf("%lld\n", num[n]);
    }
    return 0;
}
