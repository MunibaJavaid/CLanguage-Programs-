#include<stdio.h>
int main(){
	int num = 5;
	float height = 5.514;
	char  name = 'M';
	char f_name[20] = "Muniba Javaid";
	bool x = true;
	bool y = false;
	
	
	printf("Integer value of num is %d:\n",num);
	printf("float value of height is %.2f:\n ",height);
	printf("Char value of M is %c:\n",name);
	printf("Char pass as a string value is %s\n: ",f_name);
	printf("Integer value of character M is %d\n: ",name);
	printf("boolean value of x is %d:\n",x);
	printf("boolean value of y is %d:\n",y);
	return 0;
}
