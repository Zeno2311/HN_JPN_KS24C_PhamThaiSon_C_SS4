#include <stdio.h>

int main(){
	int dauthang,cuoithang,sodien;
	
	printf("Moi ban nhap so dien dau thang : ");
	scanf("%d",&dauthang);
	printf("Moi ban nhap so dien cuoi thang : ");
	scanf("%d",&cuoithang);
	
	sodien = cuoithang - dauthang;
	printf("So dien thang nay %d\n",sodien);
	if(0<=sodien && sodien<50){
		printf("Tien dien thang nay het 10.000");
	}
	else if(50<=sodien && sodien<100){
		printf("Tien dien thang nay het 15.000");
	}
	else if(100<=sodien && sodien<150){
		printf("Tien dien thang nay het 20.000");
	}
	else if(150<=sodien && sodien<200){
		printf("Tien dien thang nay het 25.000");
	}
	else if(200<=sodien){
		printf("Tien dien thang nay het 30.000");
	}
	
return 0;
}
