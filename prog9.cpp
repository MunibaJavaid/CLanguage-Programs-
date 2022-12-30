#include<stdio.h>
int main(){
	int a;
	float d;
	char ch, name[40];
	printf("Please enter the data:\n");
	scanf("%d %f %c %s",&a, &d, &ch, &name);
	
	printf("The value accepted are: %d, %f, %c, %s",a,d,ch,name);
	
	return 0;
}
