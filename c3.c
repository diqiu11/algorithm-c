#include <stdio.h>
#include <math.h>
int main()
{
    double p,r1,r2,r3,r4,p1,p2,p3,p4,p5;
    p = 1000;
    r1 = 0.0585;
    r2 = 0.0468;
    r3 = 0.054;
    r4 = 0.0414;
    p1 = p * (1+5*r1);
    p2 = p * (1+2*r2)*(1+3*r3);
    p3 = p * (1+2*r2)*(1+3*r3);
    p4 = p * (1+r4) * 5;
    p5 = p * pow(1+0.0072/4,4*5);
    printf("5years %f\n",p1);
    printf("2years %f\n",p2);
    printf("3years %f\n",p3);
    printf("1years %f\n",p4);
    printf("living %f\n",p5);
    return 0;
}

