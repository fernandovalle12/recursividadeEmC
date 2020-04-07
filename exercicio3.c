
#include <stdio.h>
int k;
//OBS FUNCIONANCO APENAS COM NUMEROS E DE ATE 10 DIGITOS
int main()
{
    int n, pos, digito;
    int valor;
 
    printf("Entre com um numero: ");
    scanf("%d",&n);
    printf("Qual o numero a ser procurado: ");
    scanf("%d",&digito);
 
    k=0;
    pos=n;
 
    while(pos>0)
    {
        valor=pos%10;
        if(valor==digito)
            k++;
        pos/=10;
    }
 
    printf("Total de ocorrencias: %d",k);
     
    return 0;
}


