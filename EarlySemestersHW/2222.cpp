#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

    int main(){
    	
    	int n1,n2,n,i,j,op,num,suma=0;
    srand(time(NULL));

printf("Ingrese la cantidad de columnas que desea para el arreglo: ");
scanf("%d",&n1);
printf("Ingrese la cantidad de filas que desea para el arreglo: ");
scanf("%d",&n2);

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



printf("\nDe que quieres saber la suma?\n");
printf("1. De una Columna\n");
printf("2. De una Fila\n");
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
		default:
			{
				printf("OPCION NO VALIDA!");
			}
	}
}
