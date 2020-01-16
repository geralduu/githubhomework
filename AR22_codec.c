#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    char s[10000];
    scanf("%s", s);
    int i;
    for(i=0; i<strlen(s); i++)
        printf("%c", s[i]-3);
    printf("\n");
    return 0;
}
