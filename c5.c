#include <stdio.h>

int main()
{
    double pi = 3.1415926;
    float h,r,l,s,sq,vq,vz;
    printf("entry :");
    scanf("%f,%f",&r,&h);
    l = 2*pi*r;
    s = pi*r*r;
    sq = 4*pi*r*r;
    vq = 3/4*pi*r*r*r;
    vz = pi*r*r*h;
    printf("l=%6.2f",l);
    printf("s=%6.2f",s);
    printf("sq=%6.2f",sq);
    printf("vq=%6.2f",vq);
    printf("vz=%6.2f",vz);
    return 0;
}

