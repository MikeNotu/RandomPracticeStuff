#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

    int main(){
    	
    	int n1,n2,n,i,j,m,vmi,vmx;
    srand(time(NULL));

printf("Ingrese la cantidad de filas que desea para el arreglo: ");
scanf("%d",&n1);
printf("Ingrese la cantidad de columnas que desea para el arreglo: ");
scanf("%d",&n2);
 int arre[n2][n1];
 n=n1*n2;
int a=b;
		printf("Ingrese el valor minimo de los numeros que seran generados aleatoriamente: ");
		scanf("%d",&vmi);
		printf("Ingrese el valor maximo de los numeros que seran generados aleatoriamente: ");
		scanf("%d",&vmx);
	
	
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{	
		arre[i][j]= rand()%(vmx+1-vmi)+vmi;	
		}
	
	}
		arre[1][2]=a;

     for(i=1;i<=n1;i++){
       printf("\n");
       for(j=1;j<=n2;j++){
         printf(" %d",arre[i][j]);
       } 
    }


}
