#include <stdio.h>
float N1;
float N2;
float N3;
float N4;
float N5;
float N6;
float N7;
float N8;
float N9;
float N10;
char S;
int main()
{

   do{
          
   	printf("DA 10 NUMEROS PARA PROMEDIARLOS\n");
   	printf("INGRESA EL PRIMERO:");
   	scanf("%f",&N1);
   	printf("INGRESA EL SEGUNDO:");
   	scanf("%f",&N2);
   	printf("INGRESA EL TERCERO:");
   	scanf("%f",&N3);
   	printf("INGRESA EL CUARTO:");
   	scanf("%f",&N4);
   	printf("INGRESA EL QUINTO:");
   	scanf("%f",&N5);
   	printf("INGRESA EL SEXTO:");
   	scanf("%f",&N6);
   	printf("INGRESA EL SEPTIMO:");
   	scanf("%f",&N7);
   	printf("INGRESA EL OCTAVO:");
   	scanf("%f",&N8);
   	printf("INGRESA EL NOVENO:");
   	scanf("%f",&N9);
   	printf("INGRESA EL ULTIMO:");
   	scanf("%f",&N10);
   	printf("El promedio de sus numeros es:%.2f\n\n",(N1+N2+N3+N4+N5+N6+N7+N8+N9+N10)/10);
   	printf("QUIERES SEGUIR O TE ABURRISTE?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   }  while(S=='s');
   printf("AL CABO QUE NI QUERIA");
}
