#include <stdio.h>

#include <stdio.h>
int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    long a,b;
    while(scanf("%ld%ld", &a, &b) == 2)
        printf("%ld\n", a-b>0?a-b:b-a);
    return 0;
}
