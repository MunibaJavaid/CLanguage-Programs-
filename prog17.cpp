#include<stdio.h>
int main(){
	int arr[5] = {1,2,3,4,5};
	int *p;
	p = &arr[5];
	
	printf("Address of p is %u\n",p);
	p++;
	printf("Address of p is %u",p);
	
	
	return 0;
}
