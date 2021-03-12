/*C Programa para calcular factorial de un numero usando recursion.*/
 
#include <stdio.h>
 
long int factorial(int n)
{   
    if(n==1)    return 1;
    return n*factorial(n-1);
}
int main()
{
    int num;
    long int fact=0;
     
    printf("Ingrese un numero entero para calcular su factorial: ");
    scanf("%d",&num);
     
    fact=factorial(num);
    printf("El factorial de %d es = %ld",num,fact);
    printf("\n");   
    return 0;
}
