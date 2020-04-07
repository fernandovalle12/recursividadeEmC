#include <stdio.h>
int soma;

unsigned long long int recursiva(unsigned int x, unsigned int n) {

	if (n !=0){
		soma += x;
		recursiva(x, n - 1);	
	} else {
		return soma;
	} 																																																		
}

int  main() {
	int x, n;

	printf("Entre com o valor de X: ");
    scanf("%d",&x);
	printf("Entre com o valor de N: ");
    scanf("%d",&n);

   	printf("Resultado : %d\n", recursiva(x,n));
   	return 0;
}
