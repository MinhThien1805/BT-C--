#include<stdio.h>
#include<string.h>
int dodai(char str[]){
	int i;
	//for(int i=0; i<str[i]!='\0';i++)
	for(; str[i]; i++);
	return i;
}
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	gets(str);
	printf("Do dai= %d", dodai(str));
}
