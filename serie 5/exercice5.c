#include<stdio.h>
int main() {

	int prix_ht;
	int prix_ttc;
	int remise;
	int prix_apres_remise;

	//FONCTION IF
	printf("FONCTION IF");
	printf("Entrer le prix hors tax: ");
	scanf("%d",&prix_ht);

	prix_ttc = prix_ht + (prix_ht*18.6)/100;

	if(prix_ttc < 1000) {
		remise = 0;
		prix_apres_remise = prix_ttc - remise;
		printf("Prix hors tax: %d \n",prix_ht);
		printf("Prix TTC: %d \n",prix_ttc);
		printf("Remise: %d \n",remise);
		printf("Le prix apres remise: %d \n",prix_apres_remise);
	} else if(prix_ttc < 2000 && prix_ttc >= 1000) {
		remise = (prix_ttc*1)/100;
		prix_apres_remise = prix_ttc - remise;
		printf("Prix hors tax: %d \n",prix_ht);
		printf("Prix TTC: %d \n",prix_ttc);
		printf("Remise: %d \n",remise);
		printf("Le prix apres remise: %d \n",prix_apres_remise);
	} else if(prix_ttc < 5000 && prix_ttc >= 2000) {
		remise = (prix_ttc*3)/100;
		prix_apres_remise = prix_ttc - remise;
		printf("Prix hors tax: %d \n",prix_ht);
		printf("Prix TTC: %d \n",prix_ttc);
		printf("Remise: %d \n",remise);
		printf("Le prix apres remise: %d \n",prix_apres_remise);
	} else {
		remise = (prix_ttc*5)/100;
		prix_apres_remise = prix_ttc - remise;
		printf("Prix hors tax: %d \n",prix_ht);
		printf("Prix TTC: %d \n",prix_ttc);
		printf("Remise: %d \n",remise);
		printf("Le prix apres remise: %d \n",prix_apres_remise);
	}
}
