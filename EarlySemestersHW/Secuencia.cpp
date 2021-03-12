#include <stdio.h>
#include <conio.h>

main()
{
	int num,i,mod,res,m,n;
	m=1;
	printf("Introduzca la cantidad de numeros de la secuencia que desea ver: ");
	scanf("%d",&num);
		
		for(i=1; i<=num; i++)
		{
		
				mod=i%2;
				n=1+m;
				
				if(mod==0){
					n=n*2;
					printf("%d\n",n);
					m=m*2;}	
					
						else{
						printf("%d\n",n);};
	
		
		}
	
	getch();
}
