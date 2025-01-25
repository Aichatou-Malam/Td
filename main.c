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
 case 16:
printf("---------Exercice 16 permutation---------------\n");
        char x, y;
printf("Entrer le premier caractere : ") ;
        scanf(" %c", &x);
  printf("Entrer le deuxieme caractere : ");
        scanf(" %c", &y);
        printf("Avant permutation : x= %c, y= %c\n", x,y);
        permutation_char(&x, &y);
        printf("Apres permutation : x = %c, y=%c", x,y);
    break;
    case 17:
    printf("---------Exercice 17---------------\n");
    int nombre1, nombre2, result;
    printf("Entrer le premier nombre : ");
    scanf("%d", &nombre1);
    printf("Entrer le deuxieme nombre : ");
    scanf("%d", &nombre2);
    result = Somme(nombre1, nombre2);
    printf("la somme de %d et %d est : %d\n", nombre1, nombre2, result);
    break ;
}
	return 0;
}
