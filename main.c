
/* 
*AUTOR: JESUS ANGEL HERNANDEZ MARTINEZ
*FECHA: 31/08/2019
*GRUPO: SABADOS
*HORARIOS: 9 A 11 AM
*MATRICULA: 1097195
*/
#include <stdio.h>
#include <stdlib.h>

//ACTIVIDAD 1//

//DECLARACION DE VARIABLES TIPO ENTERO//
int a,b,c;


int main()
{

printf("\t\t ACTIVIDAD 1\n\n");
//SOLICITUD DE CAPTURA DE VALOR//
printf("CAPTURE UN NUMERO: ");
//ASIGNACION DEL VALOR CAPTURADO A LA VARIABLE A//
scanf("%d",&a);
//SOLICITUD DE CAPTURA DE VALOR//
printf("CAPTURE OTRO NUMERO PARA COMPARACION: ");
//ASIGNACION DEL VALOR CAPTURADO A LA VARIABLE A//
scanf("%d",&b);

//EVALUACION DE VALOR CON LA CONDICION ESPECIFICADA//
if(a>b)

printf("EL NUMERO %d ES MAYOR\n",a,b);
else

printf("EL NUMERO %d ES MAYOR\n",b,a);


//ACTIVIDAD 2//
printf("\t\t ACTIVIDAD 2");

//ASIGNACION DE VALORES A LAS VARIABLES a,b,c//
a=5;
b=3;
c=-12;
//CUESTIONAMIENTO DE EVALUACION
printf("\n\nA ES MAYOR A 3?\n");

if(a>3)
//IMPRESION DE RESULTADO SI LA CONDICION ES CORRECTA//
printf("SI CUMPLE\n");
else
//IMPRESION DE RESULTADO SI LA CONDICION ES CORRECTA//
printf("NO CUMPLE\n");

printf("A ES MAYOR QUE C?\n");
if(a>c)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("B NO ES IGUAL A C?\n");
if(b!=c)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("A ES IGUAL A 3?\n");
if(a==3)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("A MULTIPLICADO POR B ES IGUAL A 15?\n");
if((a*b)==15)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("C DIVIDIDO ENTRE B ES MENOR QUE A?\n");
if((c/b)<a)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("C DIVIDIDO ENTRE B ES IGUAL A 10?\n");
if((c/b)==-10)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("SE CUMPLE QUE (A+B == 8) && (A-B == 2)?\n");
if((a+b==8)&&(a-b==2))
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("SE CUMPLE QUE (A+B == 8) || (A-B == 6)?\n");
if((a+b==8)||(a-b==6))
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("SE CUMPLE QUE A > 3 && B > 3 && C < 3?\n");
if((a>3)&&(b>3)&&(c<3))
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");


//ACTIVIDAD 3//

printf("\t\t ACTIVIDAD 3");

//REGISTRANDO VALORES POR TECLADO Y ASIGNANDOLOS A SU VARIABLES CORRESPONDIENTES//


printf("\n\nASIGNE UN VALOR ENTERO EN A: ");
scanf("%d",&a);
printf("ASIGNE UN VALOR ENTERO EN B: ");
scanf("%d",&b);
printf("ASIGNE UN VALOR ENTERO EN C: ");
scanf("%d",&c);

//EVALUANDO CONDICIONES E IMPRIMIENDO RESULTADOS//
printf("\n\nA ES MAYOR A 3?\n");

if(a>3)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("A ES MAYOR QUE C?\n");
if(a>c)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("B NO ES IGUAL A C?\n");
if(b!=c)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("A ES IGUAL A 3?\n");
if(a==3)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("A MULTIPLICADO POR B ES IGUAL A 15?\n");
if((a*b)==15)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("C DIVIDIDO ENTRE B ES MENOR QUE A?\n");
if((c/b)<a)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("C DIVIDIDO ENTRE B ES IGUAL A 10?\n");
if((c/b)==-10)
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("SE CUMPLE QUE (A+B == 8) && (A-B == 2)?\n");
if((a+b==8)&&(a-b==2))
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("SE CUMPLE QUE (A+B == 8) || (A-B == 6)?\n");
if((a+b==8)||(a-b==6))
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");

printf("SE CUMPLE QUE A > 3 && B > 3 && C < 3?\n");
if((a>3)&&(b>3)&&(c<3))
printf("SI CUMPLE\n");
else
printf("NO CUMPLE\n");






system("PAUSE");
return 0;


}


