#include<stdio.h>
	int nhap(){
		int n;
		do{
			printf("\nNhap n>0: "); scanf("%d",&n);
		}while(n<=0);
		return n;
	}
	void nhapmang(int n, int a[]){
		for(int i=1; i<=n; i++){
			printf("A[%d]: ",i);
			scanf("%d",&a[i]);
		}
	}
	void xuatmang(int n, int a[]){
		printf("\nMang vua nhap: ");
		for(int i=1; i<=n; i++){
			printf("%5d",a[i]);
		}
	}
	int tinhtong(int n, int a[]){
		int s=0;
		printf("\nTinh tong cac so nguyen duong chan:");
		for(int i=1; i<=n; i++){
			if(a[i]%2==0&&a[i]>=0){
				printf(" %d +",a[i]);
				s=s+a[i];
			} 
		}
		printf("\b = %d",s);
	}
	void timvitri(int n, int a[]){
		int dem=0,x;
		printf("\nTim vi tri cua 1 so trong mang: ");
		printf("\nNhap gia tri can tim: "); scanf("%d",&x);
		for(int i=1; i<=n; i++){
			if(a[i]==x) printf("Vi tri: %d",i);
			if(a[i]!=x){
				printf("x khong ton tai ");
			} 
		}
	}
	int main(){
		int n, m[100];
		n=nhap();
		nhapmang(n,m);
		xuatmang(n,m);
		tinhtong(n,m);
		timvitri(n,m);
	}
