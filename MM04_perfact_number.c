#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    int check,t,i=0,j=0;
    long long int perfact[7]= {6,28,496,8128,33550336,8589869056,137438691328},number;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        check=0;
        scanf("%lld",&number);
        for(j=0; j<7; j++)
        {
            if(number==perfact[j])
            {
                check=1;
                break;
            }
        }
        if(check==1)
            printf("perfect\n");
        else
            printf("nonperfect\n");
    }
    return 0;
}
