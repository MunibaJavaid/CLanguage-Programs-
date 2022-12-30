#include<stdio.h>
struct books{
	char bookName[20];
	int edition;
};

int main(){
	struct books book1 = {"Microsoft",1};
    struct books book2 = {"CBook",5};
	printf("Book Name is %s\n",book1.bookName);
	printf("Book Edition is %d\n",book1.edition);
	printf("Book Name is %s\n",book2.bookName);
	printf("Book Edition is %d",book2.edition);
	
}
