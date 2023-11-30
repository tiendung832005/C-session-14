#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[1000];
	int currentIndex=0;
	int size;
	
	
	do{
		printf("\n**********MENU*********\n");
		printf("1. Nhap vao mang\n");
		printf("2. In ra mang\n");
		printf("3. Sao chep mang vao mang khac\n");
		printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
		printf("5. Dao nguoc mang\n");
		printf("6. Nhap vao 1 ky tu, tim kiem ky tu do trong mang\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				printf("Nhap vao so phan tu cua mang: ");
				scanf("%d", &size);
				for(int i=0;i<size;i++){
					printf("numbers[%d]=", currentIndex);
					scanf("%d", &array[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				break;
			case 7:
				printf("Ket thuc chuong trinh!!");
				exit(0);
				break;
			default:
				printf("vui long chon tu 1 den 7: ");
				
				
		}
		
	}while(1==1);
}
