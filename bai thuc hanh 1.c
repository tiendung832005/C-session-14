#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
	int main(){
		int x;
		int y;
		
		printf("Nhap gia tri cho x: ");
		scanf("%d", &x);
		printf("Nhap gia tri cho y: ");
		scanf("%d", &y);
		printf("Truoc khi doi cho x= %d va y= %d\n", x,y);
		
		swap (&x,&y);
		
		printf("Sau khi hoan doi x= %d va y= %d", x,y);
		
		return 10;
		
		
	}

