#include<stdio.h>
	int nhap(int n){
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
		printf("Mang vua nhap la: ");
		for(int i=1; i<=n; i++){
			printf("%5d",a[i]);
		}
	}
	int tbcsole(int n, int a[]){
		int dem=0,s=0;
		printf("\nTBC cac so le: ");
		for(int i=1; i<=n; i++){
			if(a[i]%2!=0){
				printf(" %d +",a[i]);
				s=s+a[i];
				dem++;
			} 
		}
		printf("\b = %.2f",1.0*s/dem);
	}
	int ktsodoixung(int n){
		int s=0, du=0, a=n;
		while(n!=0){
			du=n%10;
			s=s*10+du;
			n=n/10;
		}
		if(a==s) return 1;
		else return 0;
	}
	int tinhtongsodoixung(int n,int a[]){
		printf("\nTong cac so doi xung: ");
		int s=0;
		for(int i=1; i<=n ;i++){
			if(a[i]<=10) return 0;
			if(ktsodoixung(a[i])==1){
				printf(" %d +",a[i]);
				s=s+a[i];
			} 
		} printf("\b = %d",s);
	}
	void sapxep(int n, int a[]){
		for(int i=1; i<=n-1 ; i++){
			for(int j=i+1; j<=n; j++){
				if(a[i]<a[j]){
					int tam=a[i];
					a[i]=a[j];
					a[j]=tam;
				}
			}
		}
		printf("\nMang sau khi sap xep: ");
		for(int i=1; i<=n; i++)
			printf("%5d",a[i]);
	}
	int main(){
		int n,a[100];
		n=nhap(n);
		nhapmang(n,a);
		xuatmang(n,a);
		tbcsole(n,a);
		tinhtongsodoixung(n,a);
		sapxep(n,a);
	}
	
		
