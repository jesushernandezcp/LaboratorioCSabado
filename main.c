#include <stdio.h>
#include <stdlib.h>

/*ACTIVIDAD #1*/

float x;
float fun1;
float fun2;
float fun3;
float fun4;



int main() 
{
/*do
{
//funcion 1//
printf("ASIGNE UN VALOR A LA X: ");
scanf("%f",&x);
fun1=((x-1)/4)-((x-5)/36);

printf("\n\t\t\t EL VALOR DE LA FUNCION 1 (x-1)/4 - (x-5)/36 ES IGUAL A = %.2f \n",fun1);


}while (x<10);
*/

printf("\n\t\t\t ----EVALUANDO FUNCION---- 2");

do
{
//funcion 2//
printf("\n\n");

printf("ASIGNE UN VALOR A LA X: ");
scanf("%f",&x);
fun2=(6*(x+1)/8)-((2*x-3)/16);

printf("\n\t\t\t EL VALOR DE LA FUNCION 2 6{(x-1)/8 - (2x-3)/16} ES IGUAL A = %.2f\n",fun2);
}while(x<10);

system("PAUSE");


	return 0;

}
