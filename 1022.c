#include<stdio.h>
int main(){
	long long a,b,c,d,e;
	long long f=0,s=1; 
	scanf("%d%d%d",&a,&b,&d);
	c=a+b;
	while(c>0){
		e=c%d;
		f=f+s*e;
		c=c/d;
		s=s*10;		
	} 
	printf("%d",f);
	return 0;
} 
