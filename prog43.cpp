#include<stdio.h>
int main(){
	int arr[5] = {5,6,9,8,2}; //{2,6,9,8,5}
	int i,j,temp;
	for(i = 0;i<5-1;i++){ 
		for(j = i+1;j<5;j++){
			if(arr[i] > arr[j]){ //5>2
				temp = arr[i]; //5
				arr[i] = arr[j];//2
				arr[j] = temp;	//5	
			}
		}
	}
	for(i = 0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
