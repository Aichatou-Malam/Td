#include <stdio.h>
#include <stdlib.h>

#include "Lybri.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int result = power( 2, 3 ); printf( "2³ == %d\n", result ); 
	result = fact( 6 ); printf( "6! == %d\n", result );
int N;
printf("Entrer le numéro de l'exercice : ");
scanf("%d", &N);
switch(N) {
  case 1:
printf("-------Exercice 1 affichage du message Bonjour-----\n");
printf("Bonjour\n");
break;
  case 2:
printf("--------Exercice 2 lecture d'un entier a 03 chiffres et afficher son inverse-------\n");
inverse();
break;
  case 3:
printf("---------Exercice 3 lecture de deux nombres reels et affichage de leur produit------------\n");
produit();
break;
  case 4:
printf("---------Exercice 4 parité--------\n");
pairouimpair();
break;
  case 5:
printf("----------Exercice 5 comparaison de deux entiers----------\n");
comparaison();
break;
  case 6:
printf("---------Exercice 6 affichage dans un ordre croissant 03 entiers----------\n");
ordrecroissant();
break;
}
	return 0;
}
