#include <stdio.h>
int main(){
	int num1,num2,num3,num4,tu;
	scanf("%num1,%num2,%num3,%num4",&num1,&num2,&num3,&num4);
	if(num1>num2){
		tu = num1;
		num1 = num2;
		num2 = tu;
	}
	if(num1>num3){
		tu = num1;
		num1 = num3;
		num3 = tu;
	}
	if(num1>num4){
		tu = num1;
		num1 = num4;
		num4 = tu;
	}
	if(num2>num3){
		tu = num2;
		num2 = num3;
		num3 = tu;
	}
	if(num2>num4){
		tu = num2;
		num2 = num4;
		num4 = tu;
	}
	if(num3>num4){
		tu = num3;
		num3 = num4;
		num4 = tu;
	}
	printf("num1:%d,num2:%d,num3:%d,num4:%d",num1,num2,num3,num4);
	return 0;
}
