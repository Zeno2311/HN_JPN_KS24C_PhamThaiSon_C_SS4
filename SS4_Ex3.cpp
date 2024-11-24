#include <stdio.h>

int main(){
	int number,chia3,chia5;
	
	printf("Moi ban nhap mot so bat ki : ");
	scanf("%d",&number);
	
	chia3 = (((number/10)%10) + (number/10))%3;
	if(chia3 == 0){
		printf("so chia het cho 3\n");
	}else{
		printf("so khong chia het cho 3\n");
	}
	
	chia5 = number%5;
	if(chia5 == 0){
		printf("so chia het cho 5\n");
	}else{
		printf("so khong chia het cho 5\n");
	}
	
	return 0;
}
