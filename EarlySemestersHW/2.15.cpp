#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

    int main(){
    	
    	int n1,n2,n,i,j;
    srand(time(NULL));

printf("Ingrese la cantidad de columnas que desea para el arreglo: ");
scanf("%d",&n1);
printf("Ingrese la cantidad de filas que desea para el arreglo: ");
scanf("%d",&n2);

     int arre[n2][n1],l=0;
     n=n1*n2;
     int result[n],k=0,temp;
    
    for(i=0;i<n2;i++)
	{
			for(j=0;j<n1;j++)
			{
				arre[i][j]= (rand()%101);
			}
	}

     for(i=0;i<n2;i++){
       printf("\n");
       for(j=0;j<n1;j++){
         printf(" %d",arre[i][j]);
         result[k++]=arre[i][j];
       } 
    }


   for(i=0;i<n;i++){
     for(j=0;j<n-1;j++){
       if(result[j] > result[j+1]){
         temp=result[j];
         result[j]=result[j+1];
         result[j+1]=temp;
        }
      }
   }


   i=0;
   l=0;k=0;
   while(i<n){

     for(j=0;j<n1;j++){
     arre[k][j]=result[l];
     l++;
   }
   k++;
   i=i+n1;

   }
printf("\n");

    for(i=0;i<n2;i++){
      printf("\n");
      for(j=0;j<n1;j++){
        printf(" %d",arre[i][j]);
      }
    }
}
