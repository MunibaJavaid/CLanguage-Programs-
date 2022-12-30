#include<stdio.h>
#include<string.h>
int main(){
	char firstName[15];
	char lastName[15];
	
	printf("Enter your first name: ");
	scanf("%s",&firstName);
	printf("Enter your last name: ");
	scanf("%s",&lastName);
	strcat(firstName,lastName);
	printf("%s",firstName);
	return 0;
}
