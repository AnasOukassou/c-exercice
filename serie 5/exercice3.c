#include<stdio.h>
#include<math.h>
int main() {
	int a;
	int b;
	int c;
	int delta;

	printf("Entrer a: ");
	scanf("%d",&a);
	printf("Entrer b: ");
	scanf("%d",&b);
	printf("Entrer c: ");
	scanf("%d",&c);
	printf("L'equation est: %dx^2 + %dx + %d \n",a,b,c);

	delta = pow(b,2)-(4*a*c);

	if(delta > 0) {
		printf("x1 = %f \n",(-b-sqrt(delta))/(2*a));
		printf("x2 = %f \n",(-b+sqrt(delta))/(2*a));
	} else if(delta == 0) {
		printf("x = %d",(-b)/(2*a));
	} else {
		printf("L'equation n'a pas de solution");
	}


}
