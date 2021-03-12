#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dado;
	
	srand(time(NULL));
	
	dado = (rand()%10)+1;
	printf("%d",dado);
getch();
}
