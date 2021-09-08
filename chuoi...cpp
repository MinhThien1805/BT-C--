#include<stdio.h>
#include<string.h>
	int demkituso(char s[]){
		int dem=0;
		for(int i=0; i<strlen(s); i++)
			if(s[i]>='0' && s[i]<='9')
				dem++;
		return dem;
	}
	int demsotu(char s[]){
		int d=0;
		for(int i=0; i<strlen(s);i++)
			if(s[i]==' ' && s[i+1]==' ')
				d++;
		return d++;
	}
	void xoatrai(char s[]){
		while(s[0]==' ')
			for(int i=0; i<strlen(s);i++)
				s[i]=s[i+1];
	}
	void xoaphai(char s[]){
		while(s[trlen(s)-1]==' ')
			s[strlen(s)-1]='\0';
	}
	void xoagiua(char s[]){
		int i=1;
		while(i<strlen(s))
			if(s[i]==' ' && s[i-1]==' ')
				for(int j=i; j<strlen(s),j++)
					s[j]=s[j+1];
			else i++;
	}
	void xoakttrang(char st[]){
		xoatrai(st);
		xoaphai(st);
		xoagiua(st);
	}
	int main(){
		char s[100],st[100];
		printf("Nhap chuoi: ");	gets(s);
		printf("So ki tu so: %d", demkituso(s));
		printf("\nSo tu : %d",demsotu(s));
		printf("\nXoa ki tu trang: %s",s);
		xoakttrang(st);
	}
