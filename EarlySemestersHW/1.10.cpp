#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,n3,n4,i;
	n4=10;
	printf("Este programa sirve para realizar la tabla de multiplicar de un numero entero en sentido inverso\n");
	printf("Introduzca un numero \n");
	scanf("%d",&n1);	
	for(n2=1;n2<=10;n2++)
	{	
		n3=n1*n4;
		printf("%d * %d = %d \n",n1,n4,n3);
		n4=n4-1;
	}
	getch();
}
