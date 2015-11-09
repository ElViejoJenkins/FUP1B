#include <stdio.h>
int menu,producto,cantidad;
int main ()
{
	printf("Ingresa el numero correspondiente\1 ventas\n2 ganancias");
	scanf("%d",&menu);
	switch 
	{
		case 1:
			printf ("has escogido ventas");
			printf ("Ingresa el numero correspondiente al producto\nchetos 1 precio $8\ndoritos 2 precio $9\npepsi 3 precio $10\ndonitas 4 precio $10\nBarritas 5 precio $8\n");
			scanf("%d",&producto)
			switch 
			{
				case1:
				printf("has escogido chetos\n");
				printf("Cuantos productos");
				scanf("%d",&cantidad);
				subtotal=chetos*8;
			}
			printf("Cuantos productos");
	}
}
