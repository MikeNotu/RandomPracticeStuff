#include <stdio.h>
#include <conio.h>

int num,resultado;

main(){
	printf("Introduzca un numero: ");
	scanf("%d",&num);
	resultado=num%2;
	if(resultado==0){
		printf("El numero es par");}
			else{printf("El numero es impar");
			}

	getch();
}
