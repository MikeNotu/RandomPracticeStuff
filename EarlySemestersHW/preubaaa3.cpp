#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
main()
{
	int i,n,n1,n2,j,c,d,e,swap;
	srand(time(NULL));
	
printf("Ingrese la cantidad de columnas que desea para el arreglo: ");
scanf("%d",&n2);
printf("Ingrese la cantidad de filas que desea para el arreglo: ");
scanf("%d",&n1);

int arre[n1][n2];
n=n1*n2;

for(i=1;i<=n1;i++)
{
	for(j=1;j<=n2;j++)
	arre[i][j]=(rand()%10)+1;
}

for(i=1;i<=n1;i++)
{
	for(j=1;j<=n2;j++)
	{
	printf("%d ",arre[i][j]);
	}
	printf("\n");
}






	
	getch();
}
