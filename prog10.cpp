#include<stdio.h>
int main()
{
	float inches, cm;
	printf("Enter inches: ");
	scanf("%f",&inches);
	
	cm = 2.54 * inches;
	
	printf("Centimeter = %.2f",cm);
	
	return 0;
}
