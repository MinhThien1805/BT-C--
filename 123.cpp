#include<stdio.h>
//Đây là comment
	int nhap(){
		int n;
		do{
			printf("\nNhap n>0: "); scanf("%d",&n);
		} while(n<=0);
		return n;
	}
	void nhapmang(int n, int a[]){
		for(int i=1; i<=n; i++){
			printf("A[%d]: ",i);
			scanf("%d",&a[i]);
		}
	}
	void xuatmang(int n, int a[]){
		printf("Mang vua nhap: "); 
		for(int i=1; i<=n;i++){
			printf("%5d", a[i]);
		}
	}
	void tinhtong(int n, int a[]){
		int x,s=0;
		printf("\nTinh tong cac phan tu co gia tri nho hon x:");
		printf("\nNhap x: "); scanf("%d",&x);
		for(int i=1; i<=n; i++){
			if(a[i]<x){
				printf(" %d +",a[i]);
				s=s+a[i];
			}
		}
		printf("\b = %d",s);
	}
	int ktSNT(int n){
		int du=0;
		for(int i=1; i<n; i++){
			if(n%i==0) du++;
		}
		if(du==2) return 1;
		else return 0;
	}
	int TBCSNT(int n, int a[]){
		float s=0;
		int dem=0;
		printf("\nTBC cac so nguyen to: ");
		for(int i=1; i<=n; i++){
			if(ktSNT(a[i])==1){
				printf("%d +",a[i]);
				dem++;
				s=s+a[i];
			}
		}
		printf("\b = %f",1.0*s/dem);
	}
	int main(){
		int n, m[100];
		n=nhap();
		nhapmang(n,m);
		xuatmang(n,m);
		tinhtong(n,m);
		TBCSNT(n,m);
	}
