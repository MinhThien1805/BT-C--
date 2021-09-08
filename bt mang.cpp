#include<iostream>
#include<math.h>
using namespace std;
int nhap(){
    int n;
    do{
        cout<<"Nhap n>0:";
        cin>>n;
    }while(n<=0);
    return n;
}
void nhapmang(int a[ ], int n){
    for(int i=0; i<n; i++){
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuatmang(char nd[ ], int a[ ],int n){
    cout<<nd;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
// CAU 1
void cau1(int a[ ],int n){
    int s=0;
    cout<<"\n1. Tong cac gia tri le trong mang = ";
    for(int i=0; i<n; i++){
    	if(a[i]%2==1){
    		s=s+a[i];
        	cout<<a[i]<<"+";
		}        
    }
    cout<<"\b = "<<s;
}
// CAU 2
void cau2(int a[ ], int n){
    cout<<"\n2. TBC cac phan tu o vi tri le trong mang = (";
    int s=0,dem=0;
    for(int i=0; i<n; i++){
        if(i%2==1){
           s=s+a[i];
           cout<<a[i]<<"+";
           dem++;
        }
    }
    cout<<"\b)/"<<dem<<" = "<<(float)s/dem;
}
// CAU 3
void cau3(int a[ ], int n){
    int max, min;
    for(int i=0; i<n; i++){
        if(i==0)
           max=min=a[i];
        if(i!=0){
            if(max<a[i])
                max=a[i];
            if(min>a[i])
                min=a[i];
        }
    }
    cout<<"\n3. Max-Min = "<<max<<"-"<<min<<" = "<<max-min;
}
// CAU 4
void cau4(char nd[ ], int a[ ], int n){
    int max=a[0]+a[1];
    for(int i=0; i<n-1; i++){
        if(max<(a[i]+a[i+1]))
            max=a[i]+a[i+1];
        }
        
    for(int i=0;i<n-1;i++){
        if((a[i]+a[i+1])==max)
             cout<<nd<<a[i]<<" "<<a[i+1];
    }
}
// CAU 6
int kiemtraSNT(int x){
    int demuoc=0;
    for(int i=1; i<=x; i++){
        if(x%i==0)
           demuoc++;
    }
    if(demuoc==2)  return 1;
    else return 0;
}
void cau6(int a[ ],int n){
    cout<<"\n6. Liet ke cac so nguyen to: ";
    for(int i=0; i<n; i++){
        if(kiemtraSNT(a[i])==1)
            cout<<a[i]<<" ";
    }
}
// CAU 7
int kiemtraSDX(int x){
    if(x<10) return 0;
    int y=x,s=0;
    while(x!=0){
        s=s*10+x%10;
        x=x/10;
    }
    if(s==y)  return 1;
    else return 0;
}
void cau7(int a[ ], int n){
    int s=0, dem=0;
    cout<<"\n7. TBC cac so doi xung = (";
    for(int i=0; i<n; i++){
        if(kiemtraSDX(a[i])==1){
            s=s+a[i];
            cout<<a[i]<<"+";
            dem++;
        }
    }
    cout<<"\b)/"<<dem<<" = "<<(float)s/dem;
}
// CAU 8
int kiemtra(int x){
    int s=0;
    while(x!=0){
        s=s+x%10;
        x=x/10;
    }
    if (s>5) return 1;
    else  return 0;
}
void cau8(int a[ ],int n){
    cout<<"\n8. Liet ke cac so co tong cac chu so lon hon 5 = ";
    int s=0;
    for(int i=0; i<n; i++){
        if(kiemtra(a[i])==1){
            s=s+a[i];
            cout<<a[i]<<"+";
        }
    }
    cout<<"\b = "<<s;
}
// CAU 9
void cau9(int a[ ], int n){
    int i=0, j=n-1;
    while(i<j){
        int tam=a[i];
        a[i]=a[j];
        a[j]=tam;
        i++;
        j--;
    }
}
int main(){
    int n, m[100];
    n = nhap();
    nhapmang(m, n);
    xuatmang("\nMang vua nhap: ", m, n);
    cau1(m, n);
    cau2(m, n);
    cau3(m, n);
    cau4("\n4. 2 phan tu lien tiep co tong lon nhat trong mang: ", m, n);
    cau6(m, n);
    cau7(m, n);
    cau8(m, n);
    cau9(m, n);
    xuatmang("\n9. Mang sau khi dao: ", m, n);
}
