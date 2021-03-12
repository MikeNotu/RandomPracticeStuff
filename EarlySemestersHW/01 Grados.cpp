#include <stdio.h>
#include <conio.h>
main()
{
	int CEL,FAR;
	printf("Ingrese la temperatura en grados celcius que desea convertir a grados Kelvin: ");
	scanf("%d",&CEL);
	FAR=CEL+273.15;
	
	printf("La temperatura equivale a %d grados Kelvin",FAR);
	getch();
	
}
