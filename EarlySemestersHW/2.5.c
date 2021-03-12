#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i,n,m,oport,puntos;
	i=0;
	int a[10];
	srand(time(NULL));
	
	for(i=0;i<10;i++){

	a[i]=(rand()%10)+1;
	m=a[i];
	printf("%d, ",m);
}
for(oport=3;oport>0;oport--){

printf("De cual casilla deseas adivinar el numero? (0-9)\n");
scanf("%d",&n);
i=n;
printf("Cual numero crees que hay en la casilla %d\n",n);
scanf("%d",&m);
if(m==a[i]){printf("Estas en lo correcto\n");puntos++;}else{printf("No estas en lo correcto\n");}
}
printf("La cantidad de veces que acertaste fue: %d",puntos);
getch();
}
