#include<stdio.h>

int N1;
int N2=0;
int N3=0;
int main ()

{
	printf ("ingresa el valor de numeros de ciclos\n");

	scanf("%d",&N1);
	
	while (N2<(N1+1))
	
	{
		N3=N3+N2;
		N2=N2+1;
		
	}
	
	printf("el total de todo es:%d",N3);
	
}
