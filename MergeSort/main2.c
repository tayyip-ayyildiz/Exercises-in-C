#include "ex2.h"


int main(){

	int nb_elem;


	printf("Combien d'éléments dans votre tableau ?");
	scanf("%d", &nb_elem);

	int t[nb_elem];

	printf("Choissisez les nombres de votre tableau : ");

	for (int i = 0; i < nb_elem; i++)
		scanf("%d", &t[i]);
		



	int *result = triF(t, nb_elem, 0, nb_elem-1);
	
	printf("\nVoici le tableau trié : ");
	
	for(int j=0;j<nb_elem;j++)
		
		printf("%d", result[j]);
	
	printf("\n%d", maj(result, nb_elem));





	return EXIT_SUCCESS;
}
