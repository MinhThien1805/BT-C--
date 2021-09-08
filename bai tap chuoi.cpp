#include<stdio.h>
#include<string.h>
	int demkituso(char s[]){
		int dem=0;
		for(int i=0; i<strlen(s);i++)
			if(s[i]>='0'&& s[i]<='9')
				dem++;
		return dem;
	}
	void xoatrai(char s[]){
		while(s[0]=' ')
			for(int i=0;i<strlen(s);i++)
			s[i]=s[i]+1;
	}
	int main(){
		char st[100]="    Hom   nay thu 7 ngay   29 / thang 11  / nam 2019";
		xoatrai (st);
	}
