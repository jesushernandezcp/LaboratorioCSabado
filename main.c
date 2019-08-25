#include <stdio.h>
#include <stdlib.h>

/*ACTIVIDAD #1*/

float x;
float fun1;



int main() 
{
do
{
printf("ASIGNE UN VALOR A LA X: ");
scanf("%f",&x);
fun1=((x-1)/4)-((x-5)/36);

printf("\n\t\t\t EL VALOR DE LA FUNCION 1 (x-1)/4 - (x-5)/36 ES IGUAL A = %.2f \n",fun1);
}
while (x<10);


system("PAUSE");

	return 0;
}
