#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

    int main(){
    	
    	int n1,n2,n,i,j,op,num,suma=0,opp,prod=1;
    srand(time(NULL));

printf("Ingrese la cantidad de columnas y filas que desea para el arreglo: ");
scanf("%d",&n1);
n2=n1;

     int arre[n2][n1];
     n=n1*n2;
     int result[n],k=1;
    
    printf("Columna:  ");
    for(i=1;i<=n1;i++)
    {
    	printf("[%d]",i);
	}
    for(i=1;i<=n2;i++)
	{
			for(j=1;j<=n1;j++)
			{
				arre[i][j]= (rand()%100+1);
			}
	}

     for(i=1;i<=n2;i++){
       printf("\nFila [%d]: ",i);
       for(j=1;j<=n1;j++){
         printf(" %d",arre[i][j]);
         result[k++]=arre[i][j];
       } 
    }
printf("\nQuieres hacer una suma o multiplicacion?\n");
printf("1.Suma\n");
printf("2.Multiplicacion\n");
scanf("%d",&opp);

	switch(opp)
	{
		case 1:
			{
				
printf("\nDe que quieres saber la suma?\n");
printf("1. De una Columna\n");
printf("2. De una Fila\n");
printf("3. De la diagonal izquierda a derecha\n");
printf("4. De la diagonal derecha a izquierda\n");
scanf("%d",&op);

	switch(op)
	{
		case 1:
			{
			
printf("De que columna quiere la suma?");
scanf("%d",&num);

			j=num;
			for(i=1;i<=n2;i++)
			{
			suma=suma+arre[i][j];
			}
	
printf("La suma es: %d",suma);


				
				break;
			}
		case 2:
			{
				
printf("De que fila quiere la suma?");
scanf("%d",&num);

			i=num;
			for(j=1;j<=n1;j++)
			{
			suma=suma+arre[i][j];
			}
	
printf("La suma es: %d",suma);


				break;
			}
			
		case 3:
			{
			j=1;	
	for(i=1;i<=n1;i++)
	{
		suma=suma+arre[i][j];
		j=j+1;
	}
	printf("La suma es: %d",suma);
	
				break;
			}
		case 4:
			{
				
			j=n1;	
	for(i=1;i<=n1;i++)
	{
		suma=suma+arre[i][j];
		j=j-1;
	}
	printf("La suma es: %d",suma);
				break;
			}
			
			
			
		default:
			{
				printf("OPCION NO VALIDA!");
			}
	}
				break;
			}
		case 2:
			{
printf("\nDe que quieres saber el producto?\n");
printf("1. De una Columna\n");
printf("2. De una Fila\n");
printf("3. De la diagonal izquierda a derecha\n");
printf("4. De la diagonal derecha a izquierda\n");
scanf("%d",&op);

	switch(op)
	{
		case 1:
			{
			
printf("De que columna quiere el producto?");
scanf("%d",&num);

			j=num;
			for(i=1;i<=n2;i++)
			{
			prod=prod*arre[i][j];
			}
	
printf("El producto es: %d",prod);


				
				break;
			}
		case 2:
			{
				
printf("De que fila quiere el producto?");
scanf("%d",&num);

			i=num;
			for(j=1;j<=n1;j++)
			{
			prod=prod*arre[i][j];
			}
	
printf("El producto es: %d",prod);


				break;
			}
			
		case 3:
			{
			j=1;	
	for(i=1;i<=n1;i++)
	{
		prod=prod*arre[i][j];
		j=j+1;
	}
	printf("El productol es: %d",prod);
	
				break;
			}
		case 4:
			{
				
			j=n1;	
	for(i=1;i<=n1;i++)
	{
		prod=prod*arre[i][j];
		j=j-1;
	}
	printf("El producto es: %d",prod);
				break;
			}
		default:
			{
				printf("OPCION NO VALIDA!");
			}
	}
				break;
			}
		default:
			{
				printf("OPCION NO VALIDA!");
			}
	}



}
