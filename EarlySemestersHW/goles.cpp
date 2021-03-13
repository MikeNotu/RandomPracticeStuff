#include <stdio.h>
#include <conio.h>

int eq1,eq2;
 
main(){
	
printf("Cuantos goles metio el Equipo 1\n");
scanf("%d",&eq1);
printf("Cuantos goles metio el Equipo 2\n");
scanf("%d",&eq2);

	if(eq1==eq2){
		printf("Empataron");
		
	}
		else{
		
				if(eq1>eq2){
				printf("Gano el equipo 1");
		
	}
		else{
		printf("Gano el equipo 2");}}
		

	getch();
}
