#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    //freopen("test.txt", "r", stdin);
    int n;
    double x, dx;
    double msec, mchord;

    scanf("%d %lf %lf",&n,&x,&dx);  //read data in
    while(n != 0)
    {
        msec = ( ( (x+dx)*(x+dx) + 4*sin(x+dx) + 7 ) - ( x*x + 4*sin(x) + 7 ) ) / dx ;//Substitute x into the formula msec
        mchord = ( ( (x+dx)*(x+dx) + 4*sin(x+dx) + 7 ) - ( (x-dx)*(x-dx) + 4*sin(x-dx) + 7 ) ) / (2 * dx);//Substitute x into the formula chord
        printf("%lf %lf %lf\n",dx,msec,mchord);
        dx /= 2;
        n--;
    }
    return 0;
}
