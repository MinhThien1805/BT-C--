#include<stdio.h>
int nhap(){
	int n;
	do{
		printf("\nNhap n>0:  ");
		scanf("%d",&n);
	}while(n<=0);
	return n;
}
void nhapmang(int a[], int n){
	for(int i=1;i<=n;i++){
		printf("A[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[], int n){
	printf("Mang vua nhap: ");
	for(int i=1; i<=n; i++){
		printf("%5d", a[i]);
	}
}
int max(int a[], int n){
	int max=a[0];
	printf("\nGia tri lon nhat trong mang: ");
	for(int i=1; i<n; i++)
		if(max<a[i]) max=a[i];
	
	return max;
}
int main(){
	int a[100], n;
	n=nhap();
	nhapmang(a,n);
	xuatmang(a,n);
	max(a,n);printf("%d",max);
}
