#include<stdio.h>
#include<stdlib.h>
int main(){       //Dynamic Memory Allocation
	int *ptr,n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);	
	ptr = (int *)calloc(n,sizeof(int));
//	for(i = 0;i<n;i++){  
//		printf("Enter array elements: ");
//		scanf("%d",&ptr[i]);
//	}
	for(i= 0 ;i<n;i++){
		printf("\nEnter elements are: %d",ptr[i]);
	}
		return 0;
}
