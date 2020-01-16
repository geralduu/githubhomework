#include <stdio.h>
#include <stdlib.h>


int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int no = 0, num[100], i, ans, j;
    for(i = 0; i < 5; i++)
        scanf("%d,", &num[i]);
    scanf("%d",&num[5]);
    ans = 0;
    for(i = 0; i < 5; i++)
    {
        no=0;
        for(j = 0; j < 5; j++)
        {
            if(num[j] + num[j+1] == 6 - i)//if can't find 6 find 6-i people
            {
                printf("The best combination is %d, %d, Complaint=%d\n",num[j],num[j+1],no);
                ans = 1;
                break;
            }
            else
                no++;
        }
        if(ans == 1)
            break;
    }

    return 0;
}
