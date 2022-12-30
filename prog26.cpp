#include<stdio.h>
int square(int x);
int main(){
	
	int i;
  	printf("Enter value of i ");
  	scanf("%d",&i);
	int y = square(i);
	printf("Square of %d",y);
	
	
//	for(i = 0;i<=10;i++){
//		printf("Square of %d is %d\n",i,square(i));
//	}

	
//	return 0;
}
int square(int x){
	int j;
	j = x * x; //2
//	return j;  //4
}
