#include<stdio.h>
int main(){
	int x,a,b,c,d;
	char num[15]={'0','1','2','3','4','5','6','7','8','9'}; 
	//int i;
	//printf("%c",num[0]);
	scanf("%d",&x);
	a=x/100;
	b=(x%100)/10;
	c=x%10;
	d=c;
	//printf("%d",a);
	while(a>0){
		printf("%s","B");
		a=a-1;
	} 
	while(b>0){
		printf("%s","S");
		b=b-1;
	}
	while(c>0){
		printf("%c",num[d-c+1]);
		c=c-1;
	}
	return 0;
}
