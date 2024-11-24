#include <stdio.h>
 
 int main(){
	int year;
	
	printf("Moi ban nhap nam bat ki : ");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0){
		printf("Nam nhuan");
	}else{
		printf("Nam khong nhuan");
	}
	
	return 0;
 }
