#include<stdio.h>
#include<string.h>
	int demkituso(char s[]){
		int dem=0;
		for(int i=0; i<strlen(s); i++)
			if (s[i]='0' && s[i]<='9')
				dem++;
	return dem;
	}
	int main(){
		char s[100] ="            Hom   nay ax bb    7     asdasd 9 sadasd asd              0      ";
		printf("So ki tu so = %",demkituso(s));	
		}
	
