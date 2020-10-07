#include<stdio.h>
int fun1(int x){
	int j=2;
	int s=1;
	
	while(j<x){
		if(x%j==0){
			s=s+1;
		} 
		j=j+1;
	}
	if(s!=1){
		return 0;
	}
	else{
		return 1;
	}
	
}
int main(){
	
	int n;
	int sum=0; 
	int i=3; 
    scanf("%d",&n);
    while(i<=n){
    	if(fun1(i)==1){
    		if(fun1(i+2)==1){
    			sum=sum+1;
			}
		}	
		i=i+1;
	}
    printf("%d",sum);
	return 0;
} 
