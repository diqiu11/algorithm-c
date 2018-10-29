#include <stdio.h>
#define M 99999
int main()
{
    long num;
    scanf("%d",&num);
    if(num>M){
        printf("error!")
    }else{
        int i,j,k;
        for(i=0;i<=4;i++){
            if((int)(num/10)==1){
                j=i;
                break;
            }
        }
        printf("program have %d row.",j);
        int s=0;
        double num_postion[6];
        for(k=10;k<=10000;k*10){
            num_postion[s]=num/k;
            printf("%0.1f",num_postion[s]);
            s+=1;
            if(num_postion[s]<1){
                break;
            }
        }
        int n;
        for(q=6;q>=1;q--){
            n=num_postion[q];
            //排头遇到零
            printf("%0.1",n);
        }
    }
    return 0;
}

