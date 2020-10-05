#include<stdio.h>
int main() {
	char n[105];
	int j, i = 0;
	char pin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	scanf("%s", &n);
	for( ;n[i] != '\0'; i++) {
		j += (n[i]-'0');   //ÀàÐÍ×ª»»
	}
	char pin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	if(j > 99) {
		printf("%s ", pin[j/100]);
		printf("%s ", pin[j%100/10]);
		printf("%s", pin[j%100%10]);
	}else if(j > 9) {
		printf("%s ", pin[j/10]);
		printf("%s", pin[j%10]);
	}else{
		printf("%s", pin[j]);
	}
	return 0;
}
