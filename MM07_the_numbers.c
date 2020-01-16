#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("filename.txt", "r", stdin);
    #endif
    //freopen("test.txt", "r", stdin);
    char m[10],n[10];
    int i,check,count,j;//check=0 false =1 true
    while(1)
    {
        if(scanf("%s",m)==EOF)
            break;
        scanf("%s",n);
        count=0;
        for(i=0; i<strlen(n); i++)
        {
            check=1;
            for( j = 0; j < strlen(m) && check==1; j++)
            {
                if(n[i + j] != m[j])
                    check=0;
            }
            if(check==1)
                count++;
        }
        printf("%d\n",count);

    }
    return 0;
}
