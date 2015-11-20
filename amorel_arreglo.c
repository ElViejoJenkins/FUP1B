#include<stdio.h>
void main()
{
	
	float total,suma;
	char S;
	int i,N1[10];
    
    do{

	printf("introduce las calificaciones:\n");
    
    suma = 0;
	for (i=0;i<10;i++)
    {
    scanf("%d",&N1[i]);
        if(N1[i]>10)
       {
         printf("No se puede calcular el promedio devido\nA un error en el el digito que ingreso\n");
         printf("Por favor verifique e intenete de nuevo\n");
       }
       
        suma+=N1[i];
	}
	printf("\nLa suma de es de %.1f",suma);
    
    total = suma / 10;
    printf("\nEl promedio de es de %.1f\n",total);
	 
    do{
	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   	printf("\n\n");
   	} while (S=='\n');
	}  while(S=='s');   
}
