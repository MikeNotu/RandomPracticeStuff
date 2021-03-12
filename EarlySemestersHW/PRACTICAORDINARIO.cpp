#include <stdio.h>
#include <conio.h>
main()
{
	int i,n,rem,suma=0;
	
	printf("Introduzca el numero");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		rem=n%i;
		if(rem==0)
		{suma=suma+i;
		}
	}
	
	if(suma==n)
	{printf("El numero es perfecto");
	}
	else
	{
		printf("El numero no es perfecto");
	}
	
	getch();
}
