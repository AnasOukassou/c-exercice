#include<stdio.h>
int main() {
	int n;
	printf("Entrer un nombre: ");
	scanf("%d",&n);
	if( n%9 == 0) {
		printf("%d est divisible par 9",n);
	} else {
		printf("%d n'est pas divisible par 9",n);
	}
}
