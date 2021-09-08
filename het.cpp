#include<stdio.h>
	int nhap(){
		int n;
		do{
			printf("\nNhap n>0: ");
			scanf("%d",&n);
		}while(n<=0);
		return n;
	}
	void nhapmang(int a[],int n){
		for(int i=0; i<n; i++){
			printf("A[%d]: ",i);
			scanf("%d",&a[i]);
		}
	}
	void xuatmang(int a[], int n){
		printf("\nMang vua nhap la: ");
		for(int i=0; i<n; i++)
			printf("%3d", a[i]);
	}
	int tinhgt(int a[],int n){
		int s=0,gt=1;
		printf("\nTong cac giai thua co gia tri duong trong mang: ");
		for(int i=0;i<n;i++){
			if(a[i]>0){
				gt=gt*a[i];
				s=s+gt;
				printf(" %d! +",a[i]);
			}
		}
		printf("\b= %d",s);
	}
	int max(int a[], int n){
		int max=a[0];
		for(int i=0; i<n; i++){
			if(max < a[i]) max = a[i];
		}
		printf("\nPhan tu lon nhat trong mang: %d ",max);
	}
	int main(){
		int m[100];
		int n;
		n=nhap();
		nhapmang(m,n);
		xuatmang(m,n);
		max(m,n);
		tinhgt(m,n);
	}
