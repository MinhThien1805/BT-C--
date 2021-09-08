#include<stdio.h>
#include<math.h>
float gth(int n){
 	int s=1;
 	for(int i=1;i<=n;i++)
 		s=s*i;
	 return s;
 }
 void tinhtong(int n){
 	float s=1;
 	for(int i=1;i<=n;i++)
 	//s=s+pow(-1,i)*gth(i)/(i+1);
 	if(i%2==1) s=s-gth(i)/(i+1);
 	else s=s+gth(i)/(i+1);
	 printf("%f",s); 
 }
 int main(){
 	int n;
 	printf("nhap n>0:");
 	scanf("%d",&n);
 	printf("S=");
 	tinhtong(n);
 }
