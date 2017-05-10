#include<stdio.h>
int main() {
	int m;
	int n;
	int nb = 0;

	printf("Entrer M: ");
	scanf("%d",&m);
	printf("Entrer N: ");
	scanf("%d",&n);

	for(int i=m; i<=n; i++) {
		if(i%5 == 0) {
			nb = nb + 1;
		}
	}

	printf("le nombre de valeur divisible par 5: %d",nb);
}
