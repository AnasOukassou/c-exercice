#include<stdio.h>
int main() {

	int n1;
	int n2;

	printf("Entrer le premier nombre: ");
	scanf("%d",&n1);
	printf("Entrer le deuxieme nombre: ");
	scanf("%d",&n2);

	if(n1<0 && n2<0) {
		printf("%d \n",n1*n2);
		printf("Leur produit est positif");
	} else if(n1<0 || n2<0) {
		printf("%d \n",n1*n2);
		printf("Leur produit est negatif");
	} else {
		printf("%d \n",n1*n2);
		printf("Leur produit est positif");
	}
}
