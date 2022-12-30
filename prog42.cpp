#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	char data[50];
	fp = fopen("abc.txt","w");
	if(fp != NULL){
		printf("File txt.c is exist");
	}
	else{
		printf("File txt.c is not exist");
		
	}
	while(strlen(gets(data)) > 0){
		fputs(data,fp);
		fputs("\n",fp);
	}
	while(fgets(data,50,fp) != NULL){
		printf("%s",data);
	}
	
	
	printf("Closing the file txt.c");
	fclose(fp);
	return 0;
}
