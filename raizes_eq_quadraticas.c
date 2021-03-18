#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main ()

{



float a, b, c, delta, x1, x1f, x2, x2f, Xv, Yv,opcao;

 

printf ("\t\tCALCULO DE EQUACAO DO SEGUNDO GRAU");

 

do

{

printf ("\n\n\nInforme o valor de A: ");

scanf ("%f", &a);

printf ("Informe o valor de B: ");

scanf ("%f", &b);

printf ("Informe o valor de C: ");

scanf ("%f", &c);

 

delta=pow(b,2)-4*a*c;

 

if (delta<0)

{

printf ("\nDelta e igual a %.2f", delta);

printf ("\n\nDelta Negativo, impossivel calcular.\n\n");

}

else

{

printf ("\nDelta e igual a %.2f\n", delta);

x1=((-b)+sqrt(delta))/(2*a);

x2=((-b)-sqrt(delta))/(2*a);

printf ("\nO x1=%.2f e o x2=%.2f\n\n", x1, x2);



}


}

while (opcao==1);

system("Pause");

