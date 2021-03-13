#include <stdio.h>
#include <conio.h>
main()
{
int radio,altura,volumen;

printf("Introduzca el radio de la piramide cilindrica: ");
scanf("%d",&radio);
printf("Introduzca la altura de la piramide cilindrica: ");
scanf("%d",&altura);
volumen=(.333)*3.1415*(radio*radio)*altura;
printf("El volumen es de: %d",volumen);
	getch();
	
}
