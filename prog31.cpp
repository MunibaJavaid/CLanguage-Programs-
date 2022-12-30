#include<stdio.h>
swap(int u,int v){
	int temp;    //2//3
	
	
	temp = u; //2
	u =v;     //3
	v = temp; //2
}
int main(){
	int x,y;
	x = 2;
	y = 3;
	printf(" x = %d,y = %d\n",x,y); //2//3
	swap(x,y);
	printf("After interchanging x = %d, y = %d\n",x,y); //3//2
	
	
	
}
