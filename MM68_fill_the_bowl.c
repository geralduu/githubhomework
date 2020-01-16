#include <stdio.h>
#include <stdlib.h>

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("filename.txt", "r", stdin);
    #endif
    //freopen("test.txt", "r", stdin);
    int a,b,l,i;
    while(scanf("%d",&a)!=EOF)
    {
        scanf("%d%d",&b,&l);
        if(a < b)
        {
            for(i = a; i > 0; i--)
            {
                if(b % i == 0 && a % i == 0 && i <= l)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
        else //a > b
        {
            for(i = b; i > 0; i--)
            {
                if(b % i == 0 && a % i == 0 && i <= l)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
