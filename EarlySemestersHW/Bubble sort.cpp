/* Bubble sort code */
 
#include <stdio.h>
#include <conio.h>
 
main()
{
  int n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
  int array[n];
 
  printf("Enter %d integers\n", n);
 
  for (c=1;c<=n;c++)
    {
	scanf("%d", &array[c]);
	}
	
  for (c=1;c<=n;c++)
  {
    for (d=1;d<=n-c; d++)
    {
      if(array[d]>array[d+1]) /* For decreasing order use < */
      {
        swap=array[d];
        array[d]=array[d+1];
        array[d+1]=swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c=1;c<=n;c++)
     printf("%d\n",array[c]);
 
  getch();
}
