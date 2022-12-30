#include<stdio.h>
int main(){
	int var[] = {10,100,200};
	int i,*ptr;
	ptr = var;
	
	for(int i = 0;i<3;i++){
		printf("Value of var [%d] = %d\n",i,var[i]);
		printf("Address of var[%d] = %x\n",i,ptr);
		
		ptr++;
	}
	
	return 0;
}
