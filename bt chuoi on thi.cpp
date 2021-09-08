#include<stdio.h>
#include<string.h>
	void xoatrai(char s[]){
		while(s[0]==' '){
			for(int i=0; i<strlen(s);i++)
			s[i]=s[i+1];
		}
		printf("Chuoi sau khi xoa trai: %s",s);
	}
	void xoaphai(char s[]){
		while(s[strlen(s)-1]=' '){
			s[strlen(s)-1]='\0';
		}
			
		printf("\nChuoi sau khi xoa phai: %s",s);
	}
	void xoagiua(char s[]){
		int i=1;
		while(i<strlen(s)){
			if(s[i]==' ' && s[i-1]==' ')
				for(int j=i;j<strlen(s); j++)
					s[j]=s[j+1];
			else i++;
		}
		printf("Chuoi sau khi xoa giua: %s",s);
	}
	int main(){
		char st[100];
		printf("Nhap chuoi: "); scanf("%s",st);
		
		xoatrai(st);
		
		xoaphai(st);
	
		xoagiua(st);
	}
