#include<stdio.h>//libreria de E/S



int N1;
int ASDF;
int main()


{
	
	
printf("escribe un numero para dividir en miles centenas decenas y unidades\n");

scanf("%d",&N1);
while(N1!=0)


{
	
	
	ASDF=N1%10;
	printf("unidad: %d\n",ASDF);
	N1=N1/10;
	
}


}
