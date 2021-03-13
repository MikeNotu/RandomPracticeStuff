#include <stdio.h>
 
int main()
{
  int n, prim = 0, segund = 1, prox, c;
 
  printf("Ingrese la cantidad de numeros de Fibonacci que desea\n");
  scanf("%d", &n);
 
  printf("Los primeros %d terminos de Fibonacci son:\n", n);
 
  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      prox = c;
    else
    {
      prox = prim + segund;
      prim = segund;
      segund = prox;
    }
    printf("%d\n", prox);
  }
 
  return 0;
}
