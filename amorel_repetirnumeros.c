#include <stdio.h>

int R1;
int R2;

int main()

{
	printf("coloca el numero\n");
	scanf("%d",&R1);
	
	while (R1!=0)
	
	{
		R2=R1%10;
		printf("%d\n",R2);
		R1=R1/10;
		
		
	}
	
	
	
}
