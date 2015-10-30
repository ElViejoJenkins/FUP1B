#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int N1;
int N2;
int R1;
int R2;
int R3;
int R4;
int O;

int main()


{//inicio
do

{
	printf("introduce el primer digito\n");
	scanf("%d",&N1);
	printf("introduce el segundo digito\n");
	scanf("%d",&N2);
	

	R1=N1+N2;
	R2=N1-N2;
	R3=N1*N2;
	R4=N1/N2;

	printf("la suma de los digitos es:%d\n",R1);
	printf("la resta de los digitos es:%d\n",R2);
	printf("la multiplicacion de los digitos es:%d\n",R3);
	printf("la division de los digitos es:%d\n",R4);
	
	printf("gusta hacer alguna recarga?\n");
	printf("desea repetir el proceso o quiere salirse?\n");
	printf("presione 1 si quiere continuar\n");
	scanf("%d",&O);
}

while(O==1);

}//fin	
	

