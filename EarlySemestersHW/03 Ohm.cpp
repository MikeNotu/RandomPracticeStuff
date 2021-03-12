#include <stdio.h>
#include <conio.h>

int c,r,v;

main(){
	printf("Ingrese la corriente: ");
	scanf("%d",&c);
	printf("Ingrese la resistencia: ");
	scanf("%d",&r);
	v=r*c;
	printf("El voltaje es: %d",v);	
	getch();
}
