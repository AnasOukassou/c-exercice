#include<stdio.h>
int main() {
	int n;
	int somme = 0;
	double moyenne;
	for(int i=1; i<=4; i++) {
		scanf("%d",&n);
		somme = somme + n;
	}
	moyenne = somme/4;
	printf("La moyenne: %f",moyenne);
}
