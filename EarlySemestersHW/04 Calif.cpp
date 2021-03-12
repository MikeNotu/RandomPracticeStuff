#include<stdio.h>
#include<conio.h>
main()
{
	int calif;
	printf("Ingresa la calificacion\n");
	scanf("%d",&calif);
	if(calif>=70)
	{	
		printf("Aprobado\n");
		if(calif>85)
		{
				printf("Muy bien\n");
				if(calif>=98)
				{
						printf("Excelente\n");
				}
		}
}
	else{
	
	printf("Reprobado\n");
	if(calif<30)
	{
		printf("Sin derecho a segundas\n");
	}}
getch();
}
