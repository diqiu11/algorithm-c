#include <stdio.h>

int main()
{
    int i,result;
    scanf("%d",&i);
    if(i<=100000){
        result = i*0.1;
    }else if(i<=200000){
        result = i*0.075;
    }else if(i<=400000){
        result = i*0.05;
    }else if(i<=600000){
        result = i*0.03;
    }else if(i<=1000000){
        result = i*0.015;
    }else{
        result = i*0.01;
    }
    printf("%10.2d",result);
    return 0;
}

