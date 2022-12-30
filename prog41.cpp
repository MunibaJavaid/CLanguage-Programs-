#include<stdio.h>
struct strucintcal{
	char name[20];
	int numb;
	float amt;
};


void intcal(struct strucintcal abc){				
	float si,rate = 5.5,yrs = 2.5;
	//Interest calculate
	si = (abc.amt * rate * yrs)/100;
	printf("The customer name is %s\n",abc.name);
	printf("The customer number is %d\n",abc.numb);
	printf("The customer amount is %f\n",abc.amt);
	printf("The amount is %f\n",si);	
	return;	
}
int main(){
	struct strucintcal xyz;
	printf("Enter customer name: ");
	scanf("%s",&xyz.name);
	printf("Enter Customer number: ");
	scanf("%d",&xyz.numb);
	printf("Enter Customer amount: ");
	scanf("%f",&xyz.amt);
	intcal(xyz);
}
