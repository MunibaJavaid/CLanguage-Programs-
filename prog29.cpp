#include<stdio.h>
extern int i;
int func(){
	static int counter = 1;
	counter += 5;  //1+6 //6+ 5 = 11
	printf("%d\n",counter);
}

int main(){
	func(); //6
	func();
	printf("%d",i);
	
	return 0;
}
