#include<stdio.h>
#include<malloc.h>
int main(){
	
	int *ptr,n,i,j,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);	
	ptr = (int *)malloc(n*sizeof(int));
	for(i = 0;i<n;i++){  
		printf("Enter array elements: %d ",i+1);
		scanf("%d",ptr+i);`
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(*(ptr+i)>(ptr+j)){
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
				
			}
		}
	}
	
	for(i = 0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
