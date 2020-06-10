#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Nota: los números aleatorios realmente no son aleatorios, se hacen con canculos 
//complejos. Lo correcto sería llamarlos "números pseudo-aleatorios"

int main ()
{
	srand(time(NULL)); //Palabra reservada para el generador de numeros aleatorios
	printf("%d\n", rand()); //invocación de la función random
}
