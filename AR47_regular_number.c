#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int num;
    scanf("%d", &num);
    while(num!=1)
    {
        if(num%2)// 2 not factor;
            break;
        else
            num/=2;
    }
    while(num!=1)
    {
        if(num%3)// 3 not factor;
            break;
        else
            num/=3;
    }
    while(num!=1)
    {
        if(num%5)// 3 not factor;
            break;
        else
            num/=5;
    }
    if(num!=1)
        printf("Irregular number!\n");
    else
        printf("Regular number!\n");
    return 0;
}
