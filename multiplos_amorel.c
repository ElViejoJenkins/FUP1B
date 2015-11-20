#include <stdio.h>

int T1[10];
int R1;
int N1;
int N2;
int main()


{
	printf("escribe el numero que se desea valorar con multiplos\n");
	scanf (" %d",&N1);
		
	for (R1=0; R1<10; R1++)
	{
	T1[R1] = N1*(R1+1);
	}
		
	printf("los numeros son %d\n",N1);

	for(R1=0; R1<10; R1++)

	{
		printf("%d\n",T1[R1]);
	}	
	
	printf("Quien gana batman o superman?");
}


