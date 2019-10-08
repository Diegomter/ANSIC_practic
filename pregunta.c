/* fichero pregunta.c */
#include <stdio.h>
void main(void) {
    int   calzado;
    float peso;
    char  color[20];
    printf("Confiesa tu calzado, peso y color favorito:\n");
    printf("\n       Calzado: ");
    scanf("%d", &calzado);
    printf("\n          Peso: ");
    scanf("%f", &peso);
    printf("\nColor favorito: ");
    scanf("%s", color);
    printf("El %s!\n", color);
    printf("Como puede gustarte el %s,\n", color);
    printf("calzando un %d y pesando %6.2f Kg.?\n", calzado, peso);
}
