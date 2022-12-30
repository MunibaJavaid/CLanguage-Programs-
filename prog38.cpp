//Passing Array to function
#include<stdio.h>
int sum(int num_arr[5]){
	int i, total = 0;
	for(i = 0,total = 0;i<5;i++){
		total += num_arr[i]; //total = total + num_arr[i]
		
	}
	return total;
	
}
int main(){
	int num[5] = {2,3,4,5,6},ctr,i;
//	for(ctr = 0;ctr<5;ctr++){
//		printf("Enter array elements: %d: ",ctr+1
//		);
//		scanf("%d",&num[ctr]);	
//	}
//	
	i = sum(num);
	printf("The sum of the array is %d",i);
}
