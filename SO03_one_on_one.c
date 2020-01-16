#include <stdio.h>
#include <stdlib.h>


int cmp(const void *arg1, const void *arg2)
{
    return  (*(int *)arg1 - *(int *)arg2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int num, i, j, rec;
    int a[10000], b[10000],  win;
    while(1)
    {
        win = 0;
        rec = 0;
        scanf("%d",&num);
        if(num == 0)
            break;
        for(i = 0; i < num; i++)//enemy
            scanf("%d",&a[i]);
        for(i = 0; i < num; i++)//solider
            scanf("%d",&b[i]);
        qsort(a, num, sizeof(int), cmp);
        qsort(b, num, sizeof(int), cmp);
        for(i = 0; i < num; i++)
        {
            for(j = rec; j < num; j++)
                if(b[j] > a[i])
                {
                    win++;
                    rec = j + 1;//if win check the next solider
                    break;
                }
        }

        printf("%d\n",win);

    }
    return 0;
}
