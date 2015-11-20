#include<stdio.h> 

int main() 
{ 
int i, num, r=0; 
for(i=1; i<=5; i++) 
{ 
printf("Escribe un número\n"); 
scanf("%d", &num); 
r=r+num; 
} 
printf("la suma es %d", r); 
getch();
return 0; 
} 

