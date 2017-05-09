#include<stdio.h>
int main() {
	int n;
	printf("Entrer une note: ");
	scanf("%d",&n);

	if(n<8) {
		printf("ajourne");
	} else if(n<10 && n >= 8) {
		printf("Convoque a l'orale");
	} else {
		printf("Admis");
	}
}
