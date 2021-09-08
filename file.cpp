#include<stdio.h>
void xulyF(char ten[]){
	FILE * f = fopen(ten,"r");
	if(f!=NULL){
		char c;
		int dem=0;
		while(feof(f)==0){
			c=getc(f);
			if(c>='a'&&c<='z') dem++;
		}
		printf("so ki tu : %d",dem);
		fclose(f);
	}
	else printf("ERROR: khong mo duoc tep.");
}
int main(){
	char ten[100];
	printf("Nhap ten file de mo :");
	scanf("%s",ten);
	xulyF(ten);
}

