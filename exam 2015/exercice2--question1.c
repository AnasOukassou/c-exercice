#include<stdio.h>
int main() {

	int n;
	int factoriel = 1;

	printf("Entrer un nombre positif: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		factoriel = factoriel*i;
	}

	printf("%d! = %d",n,factoriel);
}
