#include<stdio.h>
int main() {
	int n;
	int factoriel_while = 1;
	int j = 1;
	int factoriel_for = 1;

	printf("Entrer un nombre: ");
	scanf("%d",&n);

	//FONCTION WHILE
	printf("//FONCTION WHILE \n");
	while(j<=n) {
		factoriel_while = factoriel_while*j;
		j = j + 1;
	}
	printf("%d \n",factoriel_while);


	//FONCTION FOR
	printf("//FONCTION FOR \n");
	for(int i=1; i<=n; i++) {
		factoriel_for = factoriel_for*i;
	}
	printf("%d",factoriel_for);
}
