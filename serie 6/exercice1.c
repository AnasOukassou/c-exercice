#include<stdio.h>
int main() {

	int tab[6] = {3,1,9,4,8,6};
	int somme = 0;
	int produit = 1;
	float moyenne = 0;
	int max = tab[0];
	int max_i =0;
	int min = tab[0];
	int min_i = 0;
	int nb_non_nul = 0;

	printf("tableau 1: ");
	printf("{");
	for(int i=0; i<6; i++) {
		printf("%d,",tab[i]);
	}
	printf("}");

	printf("\n");

    // LE CALCULE DU SOMME
	for(int i=0; i<6; i++) {
		somme = somme + tab[i];
	}
	printf("La somme est: %d \n",somme);

	//LE CALCULE DU PRODUIT
	for(int i=0; i<6; i++) {
		produit = produit * tab[i];
	}
	printf("Le produit est: %d \n",produit);

	//LE CALCULE DU MOYENNE
	moyenne = somme/6;
	printf("La moyenne est: %d \n",moyenne);

	//LE CALCULE DU VALEUR MAX
	for(int i=1; i<6; i++) {
		if(max <= tab[i]) {
			max = tab[i];
			max_i = i;
		}
	}
	printf("Le Max est: %d | Son indice est: %d \n",max,max_i);

	//LE CALCULE DU MIN
	for(int i=0; i<6; i++) {
		if(min >= tab[i]) {
			min = tab[i];
			min_i = i;

		}
	}
	printf("Le Min est: %d | Son indice est: %d \n",min,min_i);

	//LE CALCULE DES ELEMENTS NON NUL
	for(int i=0; i<6; i++) {
		if(tab[i] != 0) {
			nb_non_nul = nb_non_nul + 1;
		}
	}
	printf("Le nombre d'elements non nul est: %d",nb_non_nul);


}

