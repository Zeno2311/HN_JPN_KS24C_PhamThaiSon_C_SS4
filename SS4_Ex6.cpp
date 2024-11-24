#include <stdio.h>

int main(){
	int dauthang,cuoithang,sodien,tiendien;
	
	printf("Moi ban nhap so dien dau thang : ");
	scanf("%d",&dauthang);
	printf("Moi ban nhap so dien cuoi thang : ");
	scanf("%d",&cuoithang);
	
	sodien = cuoithang - dauthang;
	printf("So dien thang nay %d\n",sodien);
	if(0<=sodien && sodien<50){
		tiendien=sodien*10000;
		printf("Tien dien thang nay het %d",tiendien);
	}
	else if(50<=sodien && sodien<100){
		tiendien=sodien*15000;
		printf("Tien dien thang nay het %d",tiendien);
	}
	else if(100<=sodien && sodien<150){
		tiendien=sodien*20000;
		printf("Tien dien thang nay het %d",tiendien);
	}
	else if(150<=sodien && sodien<200){
		tiendien=sodien*25000;
		printf("Tien dien thang nay het %d",tiendien);
	}
	else if(200<=sodien){
		tiendien=sodien*30000;
		printf("Tien dien thang nay het %d",tiendien);
	}
	
return 0;
}
