#include<stdio.h>
#include<math.h>
	void NhapMang(int a[], int n){
	    for (int i=1; i<=n; i++){
	        printf("A[%d] = ", i);
	        scanf("%d", &a[i]);
	    }
	}
	 
	void XuatMang(int a[], int n){
	    for (int i=1; i<=n; i++)
	        printf("%3d", a[i]);
	}
	int ktSNT(int n){
		int du=0;
		for(int i=1;i<=n;i++)
			if(n%i==0) du++;
		if(du==2) return 1;
		else return 0;
	}
	void lkSNT(int a[], int n){
		for(int i=1;i<=n;i++)
			if(ktSNT(a[i])==1) 
			printf("%3d",a[i]);
	}
	int tinhso(int n){
		int du=0,s=0;
		while(n!=0){
			du=n%10;
			s=s+du;
			n=n/10;
		}
		if(s==5) return 1;
		else return 0;
	}
	void lkso(int a[], int n){
		for(int i=1; i<=n; i++)
			if(tinhso(a[i])==1)
			printf("%3d", a[i]);
	}
	void tinhtongsole(int a[], int n){
		int s=0;
		printf("\nTong cac so le: ");
		for(int i=1; i<=n; i++){
			if(a[i]%2==1){
				s=s+a[i];
					printf(" %d +",a[i]);
			}
		}
		printf("\b = %d", s);
		
	}
	void TBCle(int a[],int n){
		int s=0, dem=0;
		printf("\nTong cac so o vi tri le= (");
		for(int i=1; i<=n; i++){
			if(i%2==1){
				s=s+a[i]; printf(" %d +", a[i]);
				dem++;
			}
		}
		printf("\b)/%d = %.3f",dem,(float)s/dem);
	}
int main(){
    int a[100],n; 
   	do{
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 );
    NhapMang(a, n);
    printf("Mang vua nhap la: ");
    XuatMang(a, n);
    printf("\nSNT: ");
    lkSNT(a,n);
    printf("\ncac so: ");
    lkso(a,n);
    tinhtongsole(a,n);
    TBCle(a,n);
}
