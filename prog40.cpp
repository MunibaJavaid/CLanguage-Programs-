#include<stdio.h>
struct employee{
	int id[3];
	char name[3][20];
	int salary[3];
};
int main(){
	struct employee emp;
	int i;
	for(i = 0;i<3;i++){
		printf("Enter emp Id: ");
		scanf("%d",&emp.id);
		printf("Enter emp Name: ");
		scanf("%s",&emp.name);
		printf("Enter emp Salary: ");
		scanf("%d",&emp.salary);
	}
}
