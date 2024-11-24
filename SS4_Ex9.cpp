#include <stdio.h>

int main(){
	int dd,mm,yy;
	
	printf("Moi ban nhap ngay : ");
	scanf("%d",&dd);
	printf("Moi ban nhap thang : ");
	scanf("%d",&mm);
	printf("Moi ban nhap nam : ");
	scanf("%d",&yy);
	
	if(dd>31 || mm>12){
		printf("Ngay thang khong hop le");
		if(mm==2 && dd>29){
			printf("Ngay thang khong hop le");
		}
	}else{
		printf("%d/%d/%d",dd,mm,yy);
	}

	return 0;
	
}
