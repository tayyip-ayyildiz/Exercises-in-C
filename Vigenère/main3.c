#include "fonctions.h"

int main(){

srand (time(NULL));

char c1[36]="IMTHEOPERATORWITHMYPOCKETCALCULATOR";
char c2[36]="KRAFTWERKKRAFTWERKKRAFTWERKKRAFTWER";

char **pt=Vigenere_random();

char *ptr=chiffrer(c1, pt, c2);

char *ptr1=dechiffrer(ptr, pt, c2);

printf("%s",ptr1);

liberer_tout(pt);

free(ptr);

free(ptr1);

//%ld pour strlen ?

return EXIT_SUCCESS;
}
