#include<stdio.h>

int main(){
	int arr[3][4] = {{11,22,33,44},{55,66,77,88},{11,66,77,44}};
	int i,j;
	for(i = 0;i<3;i++){
		printf("Address of %d the array %d and address is %u\n",i,*(*(arr+i)),(*(arr+i)));
		for(j=0;j<4;j++){
			printf("arr[%d][%d]= %d and address is %u\n",i,j,*(*(arr+i)+j),(*(arr+i)+j));
		}
	}
	return 0;
}
