#include<stdio.h>
int count(char *chuoi){
	int count=0;
	char *pointer= chuoi;
	
	while(*pointer!='\0'){
		count++;
		pointer++;
		
	}
	return count;
}
int main(){
	char a[1000];
	printf("Moi ban nhap vao 1 chuoi ki tu: ");
	gets(a);
	int letters=count(a);
	printf("So ki tu trong chuoi la: %d\n", letters);
	return 0;
}
