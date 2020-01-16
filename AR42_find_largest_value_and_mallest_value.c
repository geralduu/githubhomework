#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int num, max=-100, min=999, i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &num);
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }
    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);
    return 0;
}
