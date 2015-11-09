#include<stdio.h>

int N1;
int T1;
int T2;

int main ()

{
	printf("dame un numerto para repetir\n");
	scanf("%d" ,&N1);
	T1=1;
	while(T1 <= N1)
	
	{
		
		T2=1;
		while(T2 <=T1)
		
		{
		
		printf("%d", T1);
		T2++;
			
		
		}
	
		printf("\n");
			T1++;
			
		
	}
	
	
	
	
	
}
