#include <stdio.h>
#define M 99999
int main()//待改
{
    int num;
    scanf("%d",&num);
    if(num>M){
        printf("error!");
    }else{
        int i,j,k;
        for(i=0;i<=4;i++){
            if((int)(num/10)==0){
                j=i;
                break;
            }
        }
        printf("program have %d row.\n",j);
        int s=0;
        float num_postion[6];
        for(k=10;k<=10000;k*10){
            num_postion[s]=num/k;
            printf("%0.1f\n",num_postion[s]);
            s+=1;
            if(num_postion[s]<1){
                break;
            }
        }
        float n;
        int q;
        for(q=6;q>=1;q--){
            n=num_postion[q];
            //排头遇到零
            printf("%0.1f\n",n);
        }
    }
    return 0;
}

