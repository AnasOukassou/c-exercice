#include<stdio.h>
int main() {
	int nb_enfant;
	int prime;

	printf("Entrer le nombre d'enfants: ");
	scanf("%d",&nb_enfant);

	//FONCTION IF
	printf("//FONCTION IF \n");
	if(nb_enfant >= 3) {
		prime = nb_enfant*70;
		printf("Votre prime est: %d \n",prime);
	} else if(nb_enfant <= 2 && nb_enfant >= 1) {
		prime = nb_enfant*50;
		printf("Votre prime est: %d \n",prime);
	} else {
		printf("Vous n'avez aucun prime ! \n");
	}

	//FONCTION SWITCH
	printf("//FONCTION SWITCH \n");
	switch(nb_enfant) {
		case 0: printf("Vous n'avez aucun prime ! \n");
		break;
		case 1: printf("Votre prime est: %d \n",nb_enfant*50);
		break;
		case 2: printf("Votre prime est: %d \n",nb_enfant*50);
		break;
		default: printf("Votre prime est: %d \n",nb_enfant*70);
		break;
	}
}
