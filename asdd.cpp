#include<stdio.h>
// Đây là code
	int nhap(){
		int n;
		do{
			printf("\nNhap n>0: ");
			scanf("%d", n);
		}while(n<=0);
		return n;
	}
	void nhapmang(int a[], int n){
		for(int i=1; i<=n; i++){
			printf("A[%d]: ", i);
			scanf("%d",&a[i]);
		}
	}
	void xuatmang(int a[], int n){
		printf("Mang vua nhap la: ");
		for(int i=1; i<=n; i++)
			printf("%5d",a[i]);
	}
	int main(){
		int a[100];
		int n;
		n=nhap();
		nhapmang(a,n);
		xuatmang(a,n);
	}
