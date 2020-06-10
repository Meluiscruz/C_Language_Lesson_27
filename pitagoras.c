#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main( int argc, const char * argv[])
{
	int a, b;

	a = atoi( argv[1] ); //Convierte los parametros de la terminal a enteros//
	b = atoi( argv[2] ); 

	printf("La hipotenusa mide %.2f\n", sqrt( pow(a,2) + pow(b,2) ) );

	return 0;
}
