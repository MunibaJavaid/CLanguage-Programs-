#include<stdio.h>
int main(){
	int arr[2][4] = {{23,24,78,90},{25,26,90,89}};
	int (*p)[4];
	p = arr;

	printf("Base address of 2d array is %u\n",p); //23 //address
	p++;
	printf("Base address of 2d array is %d",*p);
	return 0;
}
