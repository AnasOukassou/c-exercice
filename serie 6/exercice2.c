#include<stdio.h>
int main() {
	int tab1[6] = {1,2,3,4,5,6};
	int tab2[6] = {3,6,5,8,6,4};
	int nv_tab[6];
	printf("tableau 1: ");
	printf("{");
	for(int i=0; i<6; i++) {
		printf("%d, ",tab1[i]);
	}
	printf("} \n");

	printf("tableau 2: ");
	printf("{");
	for(int i=0; i<6; i++) {
		printf("%d, ",tab2[i]);
	}
	printf("} \n");

	//CREER UN NOUVEAU TABLEAU QUI CONTIENT LA SOMME DES DEUX TABLEAUX
	for(int i=0; i<6; i++) {
		nv_tab[i] = tab1[i] + tab2[i];
	}
	printf("Le nouveau tableau est:");
	printf("{");
	for(int i=0; i<6; i++) {
		printf("%d, ",nv_tab[i]);
	}
	printf("} \n");
}
