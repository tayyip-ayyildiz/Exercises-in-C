#include "fonctions.h"



char **Vigenere(){

	
	char **c=malloc(26*sizeof(char*));
	
	int v=65;
	int w=0;
	
	for (int j=0;j<26;j++){
	
		v=65+w;
		w++;
	
		char *temp=malloc(26*sizeof(char));
	
		for(int i=0;i<26;i++){
			
			if(v>90){
				v-=26;
				}
				temp[i]=v++;
		
		
		}
		//printf("\n");
		
		/*for(int i=0;i<1;i++){
			printf("%c", temp[i]);     // temp[i]=int donc %c format lettre
		}*/
		
	
		c[j]=temp;
	}
	/*for(int i=0;i<26;i++){
		printf("\n");
		for(int j=0;j<26;j++){
				printf("%c", c[i][j]);
		}
	}*/
	return c;


}


//Technically, the char* is not an array, but a pointer to a char.
//Similarly, char** is a pointer to a char*. Making it a pointer to a pointer to a char.

char *chiffrer(char *c, char **v, char *cle){

	char *temp=malloc(strlen(c)+1*sizeof(char));
	
	for(size_t j=0;j<strlen(c);j++){
	
		int k=c[j];
		
		int l=cle[j];
		
		int m=v[k-65][l-65];
		
		temp[j]=m;
		
	}
	
	temp[strlen(c)]='\0';
	
return temp;
}





char *dechiffrer(char *c, char **v, char *cle){

	char *temp=malloc(strlen(c)+1*sizeof(char));
	
	for(size_t j=0;j<strlen(c);j++){
	
		int k=cle[j]-65;  //75 K
		
		int d=c[j];    //83  S
		
		int m;
		
		for(int i=0;i<26;i++){
		
			if(v[i][k]==d){
				m=v[i][k-k];
				break;
			}
		}
		temp[j]=m;
	}	
	
	temp[strlen(c)]='\0';

	
return temp;

}

char **Vigenere_random(){

	
	char **c=malloc(26*sizeof(char*));
	
	int v=rand()%26 + 65;
	int w=0;
	
	for (int j=0;j<26;j++){
	
		v+=w;
		w++;
	
		char *temp=malloc(26*sizeof(char));
	
		for(int i=0;i<26;i++){
			
			if(v>90){
				v-=26;
				}
				temp[i]=v++;
		
		
		}
		//printf("\n");
		
		/*for(int i=0;i<1;i++){
			printf("%c", temp[i]);     // temp[i]=int donc %c format lettre
		}*/
		
	
		c[j]=temp;
	}
	/*for(int i=0;i<26;i++){
		printf("\n");
		for(int j=0;j<26;j++){
				printf("%c", c[i][j]);
		}
	}*/
	return c;


}


void liberer_tout(char **c){

for(int i=0;i<26;i++){

	free(c[i]);
		
}

free(c);

}
























































