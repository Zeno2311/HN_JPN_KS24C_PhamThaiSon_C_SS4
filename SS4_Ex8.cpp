#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Moi ban nhap canh thua nhat : ");
	scanf("%d",&a);
	printf("Moi ban nhap canh thu hai : ");
	scanf("%d",&b);
	printf("Moi ban nhap canh thu ba : ");
	scanf("%d",&c);
	
	if(a>0 && b>0 && c>0){
		if(a+b>c && a+c>b && b+c>a){
			printf("La 3 canh cua tam giac");
		}else{
			printf("Khong phai 3 canh cua tam giac");
		}
	}else{
		printf("So lieu khong hop le");
	}
	return 0;
}
