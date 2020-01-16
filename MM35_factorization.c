#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int set, rec, div, a;

    scanf("%d",&a);
    while(a != 0)
    {
        div = 2;
        scanf("%d",&set);
        while(set != 1)
        {
            rec = 0;
            if(set % div == 0)//if there is div factor in number
            {
                printf("%d",div);//print factor
                set /= div;
                rec++;//how many factor
                while(set % div == 0)//how many factor
                {
                    rec++;
                    set/=div;
                }
                if(rec > 1)
                    printf("^%d",rec);
                if(set != 1)//if there is still other factor in number print *
                    printf("*");
            }
            div++;
        }
        printf("\n");
        a--;
    }
    return 0;
}
