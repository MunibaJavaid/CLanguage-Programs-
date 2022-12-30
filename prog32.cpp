#include<stdio.h>
swap(int *u, int *v){
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}
int main(){
	int x,y, *px, *py;
	px = &x;
	py = &y;
	
	x = 2;y = 3;
	printf("X = %d, y = %d\n",x,y);
	swap(px,py);
	printf("After interchanging x = %d, y = %d\n",x,y);
}
