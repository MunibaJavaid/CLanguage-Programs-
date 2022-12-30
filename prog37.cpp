#include<stdio.h>
#include<string.h>
int main(){
	char name1[15] = "SeaView";
	char name2[15] = "SeaBreeze";
	
	printf("The old name is %s\n",name1);
	strcpy(name1,name2);
	printf("The new name is %s\n",name1);
	
	
}
