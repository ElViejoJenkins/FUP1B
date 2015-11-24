#include <stdio.h>
int N1;
int R1=0;
int T1=1;
main()
{
 printf("Da el numero\n");
 scanf("%d"&N1);
 while(N1>0)
 {
  R1=R1+N1%2*T1;
  N1/=2;
  T1*=10;
 }
 printf("%d\n",R1);
}
