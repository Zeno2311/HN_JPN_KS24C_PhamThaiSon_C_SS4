#include <stdio.h>

int main(){
	int thang;
	
	printf("Moi ban nhap thang bat ki : ");
	scanf("%d",&thang);
	
	switch(thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang nay co 31 ngay");
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang nay co 30 ngay");
			break;
		case 2:
			printf("Thang nay co 28 ngay hoac 29 ngay");
			break;
		default:
			printf("Thang khong hop le");
	}
	return 0;
}
