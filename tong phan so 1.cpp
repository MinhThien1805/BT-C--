#include<stdio.h>
	int nhap(){
		int n;
		do{
			printf("nhap n>0: "); scanf("%d",&n);
		}while (n<=0);
		return n;
	}
	float tinhtong(int x){
		float s=0;
		for(int i=1; i<=x; i++)
			s=s+1.0/i;
		return s;
	}
	void xuatkq(int x){
		printf("S(%d) = ",x);
		for(int i=1;i<=x;i++)
			printf(" 1/%d +",i);
		printf("\b = %.3f",tinhtong(x));
	}
	int main(){
		int n;
		n=nhap();
		xuatkq(n);
	}
