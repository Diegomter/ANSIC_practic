/* suma enteros naturales */

#include <stdio.h>

void main(void) {
	int i=1;
	int resultado=0;

		while (i<=5) {

		resultado=resultado+i; /*otra forma de hacer todo es resultado += i++ */
		i=i+1;
					}

	printf("%d\n", resultado);

}



