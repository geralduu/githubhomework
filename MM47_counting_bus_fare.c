#include <stdio.h>
#include <stdlib.h>


int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int num[100][2];
    int i = 0, num_rec, ans = 0;
    while(scanf("%d %d",&num[i][0],&num[i][1]) !=EOF)//read in price and how many people
        i++;

    num_rec = i;
    for(i = 0; i < num_rec; i++)//add all price*people
        ans += (num[i][0] * num[i][1]);

    printf("%d\n",ans);
    return 0;
}
