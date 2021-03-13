#include <stdio.h>
#include <conio.h>

main()
{
	int n,i,j=1,op,resfin,h,suma=0;
	
	printf("Programa que captura las ventas trimenstrales de n años de una cadena comercial\n\nDe cuantas anualidades desea hacer el registro?\n");
	scanf("%d",&n);
	
	int arre[n*3];
	int res[n*3];
	
	for(i=1;i<=n*3;i++)
	{
		printf("Cuantas fueron las ventas del trimestre %d: ",i);
		scanf("%d",&arre[i]);
	}
	

	printf("Seleccione una opcion\n");
	printf("1. Imprimir ventas anuales\n");
	printf("2. Imprimir anualidad y ventas durante la anualidad mas productiva\n");
	printf("3. Imprimir anualidad y ventas durante la anualidad menos productiva\n");
	printf("4. Promedio total de  ventas\n");
	printf("5. Imprimir Histograma de ventas anuales\n");
	scanf("%d",&op);
	
	
	
	
	
	
	switch(op)
	{
		case 1:
			{
				
				for(i=1;i<=n*3;i++)
				{
					res[j]=arre[i]+arre[i+1]+arre[i+2];
					printf("En la anualidad %d se generaron %d\n",j,res[j]);
					i=i+2;
					j=j+1;
				}
				break;
			}
		case 2:
			{
				for(i=1;i<=n*3;i++)
				{
					res[j]=arre[i]+arre[i+1]+arre[i+2];
					i=i+2;
					j=j+1;
				}
				resfin=res[1];
				for(i=1;i<=n;i++)
				{
			
				if(resfin<res[i])
				{resfin=res[i];
				 h=(i*3)-2;}
				}	
				
				printf("La anualidad con mayor cantidad de ventas genero %d ventas\n",resfin);

				

			for(i=h;i<h+3;i++)
			{
				printf("El Trimestre %d genero: %d ventas\n",i,arre[i]);
			}
				break;
			}
		case 3:
			{

				for(i=1;i<=n*3;i++)
				{
					res[j]=arre[i]+arre[i+1]+arre[i+2];
					i=i+2;
					j=j+1;
				}
				resfin=res[1];
				for(i=1;i<=n;i++)
				{
			
				if(resfin<res[i])
				{}else{resfin=res[i];
				 h=(i*3)-2;
				}
				}	
				
				printf("La anualidad con menor cantidad de ventas genero %d ventas\n",resfin);

				

			for(i=h;i<h+3;i++)
			{
				printf("El Trimestre %d genero: %d ventas\n",i,arre[i]);
			}
	
				break;
			}

		case 4:
			{
				
				for(i=1;i<=n*3;i++)
				{
					res[j]=arre[i]+arre[i+1]+arre[i+2];
					i=i+2;
					j=j+1;
				}
				
				for(i=1;i<=n;i++)
				{
					suma=suma+res[i];
				}
				suma=suma/(n*3);
				printf("El promedio total es de %d",suma);
				break;
			}
		case 5:
			{

				
				for(i=1;i<=n*3;i++)
				{
					res[j]=arre[i]+arre[i+1]+arre[i+2];
					i=i+2;
					j=j+1;
				}
				
				
				for(i=1;i<=n;i++)
				{
				printf("Año%d: ",i);
				
				for(j=1;j<=res[i];j++)
				{
					printf("*");
				}
				printf("\n");
				}
			
				
				
				break;
			}
		default:
			{
				printf("OPCION NO VALIDA!");
			}
	}	
	
	
	
	
	getch();
}
