#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int i;
	ptr = (int *)malloc(5*sizeof(int));
	if(ptr != NULL){
		
		*ptr = 1;   //0 index
		*(ptr+1) = 2; //1 index
		 ptr[2] = 4; //2 index
		 ptr[3] = 8;  //3 index
		 ptr[4] = 16; //4 index
		 ptr = (int *)realloc(ptr,7*sizeof(int));
		 if(ptr != NULL){
		 	ptr[5] = 32;
		 	ptr[6] = 64;
		 	for(i = 0;i<7;i++){
		 		printf("ptr[%d] holds %d\n",i,ptr[i]);
			 }
		 }
		 else{
		 	printf("Not enough memory realloc failed\n");
		 }	 
	}
	else{
		printf("Not enough memory malloc failed\n");
		
	}
	return 0;
	
}
