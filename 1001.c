#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n=n/2;
			a=a+1;
	    }
		else{
			n=(n*3+1)/2;
			a=a+1;
		}	
	}
	printf("%d",a);
	return 0;
}
