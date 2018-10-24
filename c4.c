#include <stdio.h>
#include <math.h>
int main()
{
    int d,p;
    double r,m;
    d = 300000;
    p = 6000;
    r = 0.01;
    m = lg10(p/p-(d*r))/lg10(1+r);
    printf("crean moth:%6.1f", m);
    return 0;
}

