/* ficehro mascota*/

/* fichero mascota.c */
#include <stdio.h>
void main(void)
{
    int   edad;
    float sueldo;
    char  cachorro[30];
    printf("Confiesa tu edad, sueldo y mascota favorita.\n");
    scanf("%d %f", &edad, &sueldo);
    scanf("%s", cachorro);
    printf("%d %.0f pts. %s\n",edad, sueldo, cachorro);
    printf("Un %s!!", cachorro);
    printf(" Como te puede gustar un %s?\n", cachorro);
}
