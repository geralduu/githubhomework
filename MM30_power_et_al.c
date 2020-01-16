#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    char n[102], m[102];// n^m
    int cycle[10]= {1, 1, 4, 4, 2, 1, 1, 4, 4, 2};//number of the cycle
    int Ans[10][4]= {{0}, {1}, {6, 2, 4, 8}, {1, 3, 9, 7}, {6, 4}, {5}, {6}, {1, 7, 9, 3}, {6, 8, 4, 2},{1, 9}};//all the last number of n^m
    int i;
    while(scanf("%s%s", n, m) == 2)//only works when n and m is number else break
    {
        int nlen = strlen(n), mlen = strlen(m);// how long is n and m
        if(nlen == 1 && mlen == 1 && n[nlen-1] == '0' && m[mlen-1] == '0')//if get 0 0 break
            break;
        if(nlen == 1 && n[nlen-1] == '0')//if n=0 0^m==0
            puts("0");//output 0 printf WA?
        else if(mlen == 1 && m[mlen-1] == '0')//if m=0 n^0==1
            puts("1");//out put 1 printf WA?
        else
        {
            int a = n[nlen-1]-'0', b = 0;//-0 change char to int
            for( i = 0; m[i]; i++)//no m[i] break
            {
                b = b*10+m[i]-'0';
                b = b%cycle[a];//check the number of cycle
            }
            printf("%d\n", Ans[a][b]);
        }
    }
    return 0;
}
