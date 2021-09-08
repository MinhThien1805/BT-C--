#include<stdio.h>
	int nhap(){
		int n,x;
		do{
			printf("\nNhap n>0: "); scanf("%d", &n);
		}while(n<=0);
		for(int i=1; i<=n; i++){
			printf("\nNhap so %d: ",i); scanf("%",&x);
		}
	}

	
