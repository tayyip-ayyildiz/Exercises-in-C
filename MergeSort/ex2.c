#include "ex2.h"

int *triF(int *tab, int taille, int d, int f){


	if( (f-d)==0 )
		
		return tab;
	else{
	
		
		if(d==0){
			
			int *t0=malloc( taille*sizeof(int) );
			return Fusion(t0, 0, taille, triF(tab, taille,d, f/2), d, (f/2), triF(tab, taille, (f/2)+1, f), (f/2)+1, f);
		
			}
		
		else if( (f-d==1) && (d!=0) ){
			
			int *t0=malloc( taille*sizeof(int) );
			return Fusion(t0, 0, taille, triF(tab, taille, d, d), d, d, triF(tab, taille, f, f), f, f);
			
			
		}
		
		
			int *t0=malloc( taille*sizeof(int) );
			return Fusion(t0, 0, taille, triF(tab, taille, d, (f+d)/2), d, (f+d)/2, triF(tab, taille, ((f+d)/2)+1, f), ((f+d)/2)+1, f);
			
		
	}
}

int *Fusion(int *t0, int i, int taille, int *t1, int d1, int f1, int *t2, int d2, int f2){

	/*printf("\n i: %d , taille: %d , d1: %d , t1[d1]: %d , f1: %d , t1[f1]: %d , d2: %d , t2[d2]: %d , f2: %d , t2[f2]: %d \n", i, taille, d1, t1[d1], f1, t1[f1], d2, t2[d2], f2, t2[f2]);*/  
	
			
	if (d1>f1){
	
		//printf("\ntableau t1 vide\n--------------------------------------\n");
			
			while(d2<=f2){
				t0[i]=t1[d2];
				d2++;
				i++;
				
			}
			int m=i;
			for(int k=0;k<m;k++){
				t1[f2-i+1]=t0[k];
				i--;
			}
			
			
			/*for(int i=0;i<taille;i++)
        			printf("\n%d",t1[i]);
        			
        		printf("\n");*/
        			
        		free(t0);
	
		return t2;
	
		
		}
		
	else if(d2>f2){
		
			/*for(int i=0;i<7;i++)
        			printf("\n%d",t2[i]);*/
			
			
			while(d1<=f1){
				t0[i]=t1[d1];
				d1++;
				i++;
			}
			
			int m=i;
			for(int k=0;k<m;k++){
				t1[f2-i+1]=t0[k];
				//printf("\n%d\n", t0[k]);
				i--;
				}
			
			/*for(int i=0;i<taille;i++)
        			printf("\n%d",t1[i]);
        			
        		printf("\n");*/
			
			free(t0);
			
			return t1;
	
	
	}
		
		
	else if (t1[d1]<=t2[d2]){
		
			
			t0[i]=t1[d1];
			
		return Fusion(t0, ++i, taille, t1, d1+1, f1, t2, d2, f2);
 
		
	}
	
	else{
	
			t0[i]=t2[d2];
        		
        	//printf("\n\n");
        	
		
		return Fusion(t0, ++i, taille, t1, d1, f1, t2, d2+1, f2);
		
		
	}
		

}


int maj(int *tab, int taille){

	int maj=0;
	int compteur=1;;
	
	
	for(int j=0;j<taille-1;j++){
	
		if(tab[j]==tab[j+1]){
			maj=tab[j];
			compteur++;
		}
		
		else{
		
	
			if(compteur>taille/2){
		
				printf("\nL'element majorant est : %d\n", maj);
		
				return maj;
			}
			
		
			maj=tab[j+1];
			compteur=1;
	
		}
	}
	
	if(compteur>taille/2){
		
		printf("\nL'element majorant est : %d\n", maj);
		return maj;
	}
	
				
	printf("\nIl n'y a pas d'element majorant\n");
	return -1;
	
}

