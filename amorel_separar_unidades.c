#include<stdio.h>//Libreria de E/S
int N1;
int R1;
int ASDF;
int main()


{



	printf("escribe un numero para dividir en miles centenas decenas y unidades:\n");
	scanf("%d",&N1);
	while(N1!=0)

	for(R1=1; R1<=N1; R1++)


	{
	
	ASDF=N1%10;
	printf("unidad: %d\n",ASDF);

	N1=N1/10;
	
	
	}
}
