#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    long long  num, i;
    long long  perfect[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

    scanf("%lld",&num);
    for(i = 0; i < 7; i++)
    {
        if(perfect[i] < num)
            printf("%lld\n",perfect[i]);
        else
            break;
    }
    return 0;
}
