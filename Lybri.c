#include "Lybri.h" 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
unsigned int result = 1; 
while ( value > 1 ) { 
result *= value; 
value --; }
return result;
 } 
 // Définition d'une fonction d'élévation à une puissance données. 
 int power( int value, unsigned int pow ) { 
 if ( pow == 0 ) return 1; 
 if ( pow == 1 ) return value;
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; pow--; 
} 
return accumulator; 
}
// Exercice 1 affichage du message Bonjour.
// Exercice 2 lecture d'un entier a 03 chiffres et afficher son inverse.
void inverse() {
int nombre,inverse=0;
scanf("%d", &nombre);
if(nombre < 100|| nombre > 999) {
    printf("Entrer un nombre valide à trois chiffres.\n");
}
while (nombre !=0)
{
  int chiffre = nombre%10;
  inverse = inverse*10+chiffre;
  nombre /=10;
}
printf("le nombre inverse est : %d\n",  inverse");
}
// Exercice 3 lecture de deux nombres reels et affichage de leur produit.
void produit() {
  float x, y, produit;
  printf("Entrer deux nombres reels : ");
  scanf("%f%f", &x, &y);
   produit = x * y;
printf("le produit des deux reels est :  %.3f\n", produit);
}
// Exercice 4 parité 
void pairouimpair() {
   int N;
   printf("Entrer un entier : ");
   scanf("%d", &N);
   if (N%2 == 0) {
       printf("%d est pair", N);
   }
   else {
       printf("%d est impair", N);
   }
}
// Exercice 5 comparaison de deux entiers.
void comparaison() {
     int a,b;
     printf("Entrer deux entiers : ");
     scanf("%d%d", &a , &b);
     if(a == b)
     {
       printf("%d=%d\n", a,b);
     }
     else {
     if(a>b)
     {
      printf("%d>%d\n", a,b);
     }
     else
     {
       printf("%d<%d\n", a,b);
     }
 }
}
// Exercice 6 affichage dans un ordre croissant 03 entiers.
void ordrecroissant() {
      int a,b,c;
   printf("entrer trois entiers : ");
   scanf("%d%d%d", &a, &b, &c);
        if (a>b && a>c) {
            if (b>c)
   printf("%d<%d<%d\n", c,b,a );
                   else printf("%d<%d<%d", b,c,a);
 }
  if (b>a && b>c) {
          if(a>c)
  printf("%d<%d<%d\n", c,a,b);
  else printf("%d<%d<%d", a,c,b);
  } 
  if (c>a && c>b) { 
      if (a>b)
   printf("%d<%d<%d", b,a,c);
    else printf ("%d<%d<%d", a,b,c);
  }
  } 
//Exercice 16 permutation
void permutation_char(char* a, char* b ) {
        char temp = *a;
          *a = *b;
          *b = temp;
}
//Exercice 17         
int Somme(int a, int b)  {
        return a + b;
}
  
