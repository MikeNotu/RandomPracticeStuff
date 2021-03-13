/*FUNCIONES EN C*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

main()
{

int i,j,n1,n2;
printf("Ingrese la cantidad de columnas que desea para el arreglo: ");
scanf("%d",&n1);
printf("Ingrese la cantidad de filas que desea para el arreglo: ");
scanf("%d",&n2);
int arre[n2][n1];
for(i=0;i<n2;i++)
	{
			for(j=0;j<n1;j++)
			{
				printf("Escribe el valor de la posicion [%d][%d]",i,j);
				scanf("%d",&arre[i][j]);
			}
	}
	system("PAUSE");
	system("CLS");
	printf("Su arreglo quedo: \n\n");
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("[%d]",arre[i][j]);
		}
		printf("\n");
	}
getch();	
}
