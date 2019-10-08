/* fichero ecuacion2.c*/
/*raices ecu 2do grado*/

#include <stdio.h>
#include <math.h>

void main(void)
{
	double a, b, c; 
	double x, x1, x2, xr, xi, discr;

	printf("ingrese coeficientes a, b y c\n");
	printf("a:");
	scanf("%lf", &a);
	printf("\nb:");
	scanf("%lf", &b);
	printf("\nc:");
	scanf("%lf", &c);
	//printf("%d %d %d\n", a, b, c);
	discr= b*b-4.0*a*c;
	printf("%f\n", discr);
	if (discr>0.0)
			{
			x1=(-b+sqrt(discr))/(2.0*a);
    		x2=(-b-sqrt(discr))/(2.0*a);
    		printf("\nLas dos raices reales son: %1f y %1f  \n", x1, x2);
			}
	else if (discr<0.0)
			{
			 xr=(-b/2.0*a);
    		xi=(sqrt(-discr)/2.0*a);
    		printf("\nLas dos raices son: %1f±%1fi  \n", xr, xi);
			}
	else	{
			x=(-b/2*a);
			printf("\nLas raices iguales son: %1f \n", x);
			}
}
