#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    long  num, rec, div;

    div = 2;
    scanf("%ld",&num);
    while(num != 1)
    {
        rec = 0;
        if(num % div == 0)
        {
            printf("%ld",div);
            num /= div;
            rec++;
            while(num % div == 0)
            {
                rec++;
                num/=div;
            }
            if(rec >= 1)
                printf("^%ld",rec);
            if(num != 1)
                printf(" x ");
        }
        div++;
    }
    printf("\n");

    return 0;
}
