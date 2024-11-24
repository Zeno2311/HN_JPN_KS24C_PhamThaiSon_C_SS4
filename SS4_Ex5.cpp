#include <stdio.h>

int main(){
	int songuyen,hangtram,hangchuc,donvi;
	
	printf("Moi ban nhap so nguyen co ba chu so : ");
	scanf("%d",&songuyen);
	
	hangtram = ((songuyen/100)%10);
	hangchuc = ((songuyen/10)%10);
	donvi = songuyen%10;
	if( hangchuc < donvi < hangtram ){
		printf("So thu 3 nam trong khoang giua so thu 2 va so thu 1");
	}else{
		printf("So thu 3 khong nam trong khoang giua so thu 2 va so thu 1");
	}
	  return 0;
}
