#include<stdio.h>
#include<string.h>
int main(){
	char str1[15] = "NewYork";
	char str2[15] = "Washington";
	char ch = 'a';
	char *loc;
	loc = strchr(str1,ch);
	if(loc != NULL){
		printf("%c occurs in %s\n",ch,str1);
	}
	else{
		printf("%c does not occurs in %s\n",ch,str1);
		
	}
	return 0;
}
