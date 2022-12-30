#include<stdio.h>
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("Number is even %d",num);
	}
	else{
		printf("Number is odd %d",num);
	}
	return 0;
}
