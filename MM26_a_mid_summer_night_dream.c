#include <stdio.h>
#include <stdlib.h>
int cmp(const void *i, const void *j)
{
    return *(int *)i - *(int *)j;
}
int findIdx(int idx, int A[])
{
    int i, sum = 0;
    for(i = 0; ; i++)
    {
        sum += A[i];
        if(sum >= idx)
            return i;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    int n, i, x;
    while(scanf("%d", &n) == 1)
    {
        int A[65537] = {};
        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);
            A[x]++;
        }
        int mid, midn, midp, next;
        if(n&1)
        {
            mid = findIdx(n/2+1, A);
            midn = A[mid];
            midp = 1;
        }
        else
        {
            mid = findIdx(n/2, A);
            midn = A[mid];
            next = findIdx(n/2+1, A);
            if(next != mid)
            {
                midn += A[next];
                midp = next - mid+1;
            }
            else
            {
                midp = 1;
            }
        }
        printf("%d %d %d\n", mid, midn, midp);
    }
    return 0;
}
