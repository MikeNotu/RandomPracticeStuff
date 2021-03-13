#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

    int main(){
    	
    	int n1,n2,n,i,j,m=0,vmi,vmx,op,l=1,v1,v2,v3;
    srand(time(NULL));

printf("Ingrese la cantidad de filas que desea para el arreglo: ");
scanf("%d",&n1);
printf("Ingrese la cantidad de columnas que desea para el arreglo: ");
scanf("%d",&n2);
 int arre[n2][n1];
 n=n1*n2;
 int arreglon[n];

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


     for(i=1;i<=n1;i++){
       printf("\n");
       for(j=1;j<=n2;j++){
         printf(" %d",arre[i][j]);
       } 
    }

	printf("\nSeleccione una opcion\n");
	printf("1.Numeros Pares\n");
	printf("2.Numeros Impares\n");
	printf("3.Numeros Primos\n");
	printf("4.Numeros Perfectos\nIngrese su eleccion: ");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			{
				
		for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{	
		if(arre[i][j]%2==0)
			{
				arre[i][j]=vmx+1;
			}
		
		}
	
	}
			
	
	printf("1.Numeros Pares\n");				
			
				break;
			}
		case 2:
			{

		for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{	
		if(arre[i][j]%2!=0)
			{
				arre[i][j]=vmx+1;
			}
		
		}
	
	}
			
				break;
			}
		case 3:
			{
				break;
			}
		case 4:
			{
				break;
			}
		default:
			{
				printf("OPCION NO VALIDA!");
			}
	}
	
	
	
     for(i=1;i<=n1;i++)
	 {
       	
       for(j=1;j<=n2;j++)
	   {
       	
       	    if(arre[i][j]!=vmx+1)
       		{
			arreglon[l]=arre[i][j];
			l=l+1;
			m=m+1;       	
	   		}

       	} 
    }
    
    
    for(l=1;l<=m;l++)
    {
	printf("%d, ",arreglon[l]);
 
	}
	
	   v1=sqrt(m);
	   	printf("\nLa raiz cuadrada del total de numeros finales en numero entero es: %d\n",v1);
	   
	if(m==v1*v1)
	{ 
	
 l=1;
     for(i=1;i<=v1;i++)		{
       printf("\n");
       for(j=1;j<=v1;j++){
         printf("%d ",arreglon[l]);
         l=l+1;
      					 } 
    						}
		
	}
	
	else{
		
		v2=v1;
		v3=v1*v2;
		for(v3=v3;v3<=m;v2++)
		{
				v3=v1*v2;
		}
		
		for(l=l;l<=v3;l++)
		{
		arreglon[l]= rand()%(vmx+1-vmi)+vmi;
		}
		
	
	
	
	
	
		 l=1;
     for(i=1;i<=v1;i++)		{
       printf("\n");
       for(j=1;j<v2;j++){
         printf("%d ",arreglon[l]);
         l=l+1;
      					 } 
    						}
		
		}
 

}
