#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Moi ban nhap so nguyen thu nhat : ");
	scanf("%d",&a);
	printf("Moi ban nhap so nguyen thu hai : ");
	scanf("%d",&b);
	printf("Moi ban nhap so nguyen thu ba : ");
	scanf("%d",&c);
	
	if( b < c < a ){
		printf("So thu 3 nam trong khoang giua so thu 2 va so thu 1");
	}else{
		printf("So thu 3 khong nam trong khoang giua so thu 2 va so thu 1");
	}
	  return 0;
}
