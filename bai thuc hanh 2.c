#include<stdio.h>
int makeSum(int *start, int *end){
	int sum=0;
	int *pointer= start;
	
	while (pointer<= end){
		sum += *pointer;
		pointer++;
		
		
	}
	
	return sum;
	
}
int main(){
	int start;
	int end;
	printf("Nhap gia tri so nguyen bat dau: ");
	scanf("%d", &start);
	printf("Nhap gia tri so nguyen ket thuc: ");
	scanf("%d", &end);
	
	int sum = makeSum(&start, &end);
	
	printf("Tong cac so nguyen tu %d den %d la: %d\n", start, end, sum);
	return 10;
}
