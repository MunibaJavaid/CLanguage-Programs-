#include<stdio.h>

int main(){
	
	int a = 5, b= 5, c=10, result;
	
	result = (a == b) && (c > b); // 5 == 5 && 10 > 5 = 1
	printf("(a ==b ) && (c > b) is %d\n",result);
	
	
	result = (a == b) || (c < b);  // 5 == 5 || 10 < 5 = 1
	printf("(a == b) || (c < b) is %d\n",result);
	
	result = (a != b) || (c < b); // 5 != 5 || 10 < 5 = 0
	printf("(a != b) || (c < b) is %d\n",result);
	
	return 0;
}
