#include <stdio.h>
#include <conio.h>
main ()
{
     int x, y, pot=0,i=0, count=0;
 
     printf ("Entre com o valor de N: ");
     scanf ("%d",&x);
     printf ("Entre com o valor de X: ");
     scanf ("%d",&y);
 
     for (i>1;i<y;i++) {
     	pot = x*(x*i);
     }
     
     printf ("\nO valor de N elevado a X sera de: %d", pot);  
}
