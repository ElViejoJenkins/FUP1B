#include<stdio.h>//Libreria de E/S
/* Tienda Oxxo */

int N1;
int N2;
int N3;
int N4;
int N5;
int N6;
int N7;
int N8;
int N9;
int N10,
int todoR;
int todoG;
int todoC;
int todoP;
int todoPA;
int todoPAN;
int todoA;
int todoL;
int todoCI;
int todoD;
int total;
int main ()

{//Inicio

printf ("Oxxo\n");
printf ("$9 refresco\n$11 galletas\n$1 chicles\n$8 papas\n$3 pan\n$12 panque\n$6 agua\n$11 leche\n$4 cigarros\n$2 dulces");
printf ("\nIngresa la cantidad de cosas que quieres\n");
scanf ("%d",&N1);

switch (N1)
{
	
case 1: {
	printf("numero de refrescos que quicieras\n");
	scanf ("%d",N1);
	todoR=N1*9;
	printf("el total es de:",todoR);
	break;
	}	
	
case 2: {
	printf("numero de galletas que quicieras\n");
	scanf ("%d",N2);
	todoG=N2*11;
	printf("el total es de:",todoG);
	break;
	}	
	
case 3: {
	printf("numero de chicles que quicieras\n");
	scanf ("%d",N3);
	todoC=N2*1;
	printf("el total es de:",todoC);
	break;
	}
	
case 4: {
	printf("numero de papas que quicieras\n");
	scanf ("%d",N4);
	todoP=N4*12;
	printf("el total es de:",todoP);
	break;
	}
	
case 5: {
	printf("numero de pan que quicieras\n");
	scanf ("%d",N5);
	todoPA=N4*11;
	printf("el total es de:",todoPA);
	break;
	}
		
case 6: {
	printf("numero de panques que quicieras\n");
	scanf ("%d",N6);
	todoPAN=N6*12;
	printf("el total es de:",todoPAN);
	break;
	}
	



}



}
