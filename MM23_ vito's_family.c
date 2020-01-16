#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int round,i;
    int relatives,home[510],sum,median;

    scanf("%d",&round);
    while(round--)
    {
        scanf("%d",&relatives);
        for(i=0; i<relatives; i++)
        {
            scanf("%d",&home[i]);
        }

        qsort(home,relatives,sizeof(int),compare);

        median=home[relatives/2];//find the median number

        sum=0;
        for(i=0; i<relatives; i++)
        {
            sum+=abs(home[i]-median);//abs=return absolute value
        }

        printf("%d\n",sum);
    }



    return 0;
}
