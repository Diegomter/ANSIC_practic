/* fichero marathon.c */
/* Un marathon tiene 26 millas y 385 yardas. */
/* Una milla tiene 1760 yardas. */
/* Calcula la distancia del marathon en kilómetros. */

#include <stdio.h>
void main(void) {
    int    millas, yardas;
    float  kilometros;
    millas=26;
    yardas=385;
    kilometros=1.609*(millas+yardas/1760);
    printf("\nUn marathon tiene %f kilometros.\n\n", kilometros);
}