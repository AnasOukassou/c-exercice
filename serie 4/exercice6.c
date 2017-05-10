#include<stdio.h>
int main() {
	int prix_ht,nb_article,tva;
	double prix_ttc;
	tva = 12;

	printf("Entrer le prix HT: ");
	scanf("%d",&prix_ht);
	printf("Entrer le nombre d'article: ");
	scanf("%d",&nb_article);

	prix_ttc = (prix_ht*nb_article*tva)/100 + prix_ht*nb_article;
	printf("le prix HT: %d \n",prix_ht);
	printf("Nombre d'article: %d \n",nb_article);
	printf("TVA: %d \n",tva);
	printf("Le prix TTC: %f \n",prix_ttc);
}
