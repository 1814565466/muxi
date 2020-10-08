#include<stdio.h>
int fun(int x){
	int j=2;
	int s=1;
	
	while(j<x){
		if(x%j==0){
			s=s+1;
		} 
		j=j+1;
	}
	if(s!=1){
		return 0;//不为素数 
	}
	else{
		return 1;//为素数 
	}
	
}
int main(){
	int a,b,d,i;
	int count=0;
	int s=1;
	int c=2;
	scanf("%d%d",&a,&b);
	int p[b]; 
	while(s<=b){
		if(fun(c)==1){
			p[s-1]=c;
			s=s+1;
		}
		c=c+1;
	}
	for(i=a-1;i<b;i=i+1){
		printf("%d",p[i]);
		count=count+1;
		if(count%10==0)
			printf("\n");
		else if(i!=b-1)
			printf(" ");
		
	}
	return 0;
} 
