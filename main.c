#include <stdio.h>
#include <stdlib.h>

#include "Lybri.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int result = power( 2, 3 ); printf( "2³ == %d\n", result ); 
	result = fact( 6 ); printf( "6! == %d\n", result );
	return 0;
}
