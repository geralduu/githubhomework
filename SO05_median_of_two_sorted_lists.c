#include <stdio.h>
#include <stdlib.h>
#define MAX 100000


int main(int argc, const char * argv[])
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int A[MAX], B[MAX], C[2*MAX], num_A, num_B, i, count, x, y, z, ncase;
    scanf("%d", &ncase);
    while(ncase--)
    {
        x = 0;
        y = 0;
        z = 0;
        count = 0;   //x y z record where does A B compare and where c store the data
        scanf("%d", &num_A);
        num_B = num_A;
        for(i=0; i<num_A; i++)
            scanf("%d", &A[i]);
        for(i=0; i<num_B; i++)
            scanf("%d", &B[i]);

        while(x < num_A  &&  y < num_B)//x and y can't > the number of data
        {
            if(A[x] <= B[y])//input a
                C[z++] = A[x++];
            else            //input b
                C[z++] = B[y++];
            count++;
        }

        //put rest number in c
        if(x == num_A)
            while(y < num_B)
                C[z++] = B[y++];
        else
            while(x < num_A)
                C[z++] = A[x++];
        printf("%d\n", C[num_A-1]);//because there is no odd
    }
    return 0;
}
