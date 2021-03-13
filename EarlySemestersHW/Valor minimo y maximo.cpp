#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dado,vmi=0,vmx=5;
	
	srand(time(NULL));
	
	dado = rand()%(vmx+1-vmi)+vmi;
	printf("%d",dado);
getch();
}
