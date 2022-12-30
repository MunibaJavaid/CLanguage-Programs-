#include<stdio.h>
int addition(int num1,int num2){	
	int sum;
	sum = num1 + num2;
	return sum;	
}
int main(){
	int val1;
	int val2;
	printf("Enter num 1: ");
	scanf("%d",&val1);
	printf("Enter num 2: ");
	scanf("%d",&val2);	
	int res = addition(val1,val2);
	printf("Output: %d",res);
	return 0;
}
