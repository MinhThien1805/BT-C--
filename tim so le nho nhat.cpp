#include<stdio.h>
	int nhap(){
		int n;
		do{
			printf("Nhap n: "); scanf("%d",&n);
		} while(n<10);
		return n;
	}
	int tinhuoc(int n){
		int s=0;
		printf("S= ");
		for(int i=1; i<=n; i++){
			if(n%i==0){
				s=s+i;
				printf(" %d +",i);
			}
		}
		printf("\b = %d",s);
	}
	int main(){
		int n;
		n=nhap();
		tinhuoc(n);
	}
