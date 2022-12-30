#include<stdio.h>
int main(){
	int a = 4;
	int * ptr;  //decleration of pointer
	ptr = &a;
	
	printf("The value of a is %d: \n",a);
	printf("The address of value of a is %X",ptr);
	
	return 0;
}
