#include<stdio.h>
void greatNum();
int main(){
	greatNum();
	return 0;
}
//User defined Function
void greatNum(){
	int i,j;
	printf("Enter First integer: ");
	scanf("%d",&i);
	printf("Enter Second integer: ");
	scanf("%d",&j);
	if(i > j){
		printf("The greater num is %d",i);
	}
	else{
		printf("The greater num is %d",j);
		
	}
}
