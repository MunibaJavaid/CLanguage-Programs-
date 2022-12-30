#include<stdio.h>
 int i; //global variable

int fact(int n){  //5
	int f = 1;
	for(i = 1;i<=n;i++){
		f = f * i;  // 1 * 1 = 1// 2=1*2// 6=2*3//24=6*4// 120=24*5
	}
	return f;
}




int main(){
	int no,factorial;
	printf("Enter a  number: ");
	scanf("%d",&no);
	factorial = fact(no);
	printf("%d",i);
	printf("Factorial of the num(%d) = %d",no,factorial);
	
	return 0;
}
