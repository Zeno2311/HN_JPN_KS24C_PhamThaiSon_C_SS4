#include <stdio.h>

int main(){
	int n,phandu;
	
	printf("Moi ban nhap so nguyen bat ki : ");
	scanf("%d",&n);
	
	phandu = n % 2;
	if( phandu == 0){
		printf("So chan");
	}else{
		printf("So le");
	}
	
	return 0;
}
