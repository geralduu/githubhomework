#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int  num[100], i = 0, max = 0, max_ptr=0, rec, occur[100] = {0};

    while( scanf("%d",&num[i]) !=EOF)
        i++;
    rec = i;
    for(i = 0; i < rec; i++)//find who's the most
    {
        occur[ num[i] ]++;
        if( occur[num[i]] > max)
        {
            max_ptr = num[i];//who occur most
            max = occur[num[i]];//how many times does it occur
        }
    }
    if(occur[max_ptr] < (rec/2))
        printf("No Majority\n");
    else
        printf("Majority is %d\n",max_ptr);

    return 0;
}
