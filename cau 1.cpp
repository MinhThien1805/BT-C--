#include<stdio.h>
int nhap(){
	int n;
	do{
		printf("\nNhap n>0: ");
		scanf("%d", &n);
	}while(n<=0);
}
