#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
    int i,k;
    do{
        printf("entry <%d nums:i",M);
        scanf("%d",&i);
    }while(M<1000);
    k = sqrt(i);
    printf("the num is:%d",k);
    return 0;
}

