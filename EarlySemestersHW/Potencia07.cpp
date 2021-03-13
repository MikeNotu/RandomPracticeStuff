/*Programa para calcular la potencia de un numero mediante recursion*/
 
#include <stdio.h>
 
long int gp(int b,int p)
{
    long int resultado=1;
    if(p==0) return resultado;
    resultado=b*(gp(b,p-1));  
}
int main()
{
    int base,elev;
    long int resultado;
     
    printf("Ingrese el valor de la base: ");
    scanf("%d",&base);
     
    printf("Ingrese el valor de la potencia: ");
    scanf("%d",&elev);
     
    resultado=gp(base,elev);
     
    printf("%d elevado a %d es: %ld\n",base,elev,resultado);
     
    return 0;
}
