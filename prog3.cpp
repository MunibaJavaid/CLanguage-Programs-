#include<stdio.h>
int main(){
	int a = 5, b = 5, c = 10;
	printf("%d == %d is %d\n",a,b,a==b);  // 5 = 5 = 1
	printf("%d == %d is %d\n",a,c,a==c); // 5 == 10 is 0
	printf("%d > %d is %d\n",a,b,a>=b); //5 > 5 is 0
	printf("%d < %d is %d\n",a,b,a<=c); // 5<10 is 1
	
	return 0;
}
