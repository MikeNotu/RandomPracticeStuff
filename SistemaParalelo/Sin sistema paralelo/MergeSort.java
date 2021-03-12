/*Sin sistema paralelo*/
import java.util.Random;
public class MergeSort{
	public static void main(String[] args) {

        long startTime;
        long endTime;
		int number;
        startTime = System.currentTimeMillis();



        MergeSort mergeSort = new MergeSort();
        int[] arr = new int[1000000];
        int n = arr.length;
        int i = 0;
        int wmin = 0;
        int wmax=999;
		for(i=0;i<n;i++) {
			Random dice = new  Random();
			number = wmin+dice.nextInt(wmax-wmin+1);
		arr[i]=number;

		}
        


        System.out.println("Array original:");
        mergeSort.printArray(arr);


        System.out.println();

        System.out.println("Array ordenado:");
        mergeSort.sort(arr,0,n-1);
        mergeSort.printArray(arr);
        

        endTime = System.currentTimeMillis();
        System.out.println("Tiempo que tomo: " + (endTime - startTime) + " milisegundos");
    }
	
	public void sort(int arr[], int left, int right){
	    if(left < right){
	      int middle = (left + right) / 2;
	      
	      //Divide la primera y segunda mitad (llamada recursiva).
	      sort(arr, left, middle);
	      sort(arr, middle+1, right);

	      //Une las mitades.
	      merge(arr, left, middle, right);
	    }
	}

	public void merge(int arr[], int left, int middle, int right) {
		  //Encuentra el tamaño de los sub-vectores para unirlos.
		  int n1 = middle - left + 1;
		  int n2 = right - middle;

		  //Vectores temporales.
		  int leftArray[] = new int [n1];
		  int rightArray[] = new int [n2];

		  //Copia los datos a los arrays temporales.
		  for (int i=0; i < n1; i++) {
		    leftArray[i] = arr[left+i];
		  }
		  for (int j=0; j < n2; j++) {
		    rightArray[j] = arr[middle + j + 1];
		  }
		  /* Une los vectorestemporales. */

		  //Índices inicial del primer y segundo sub-vector.
		  int i = 0, j = 0;

		  //Índice inicial del sub-vector arr[].
		  int k = left;

		  //Ordenamiento.
		  while (i < n1 && j < n2) {
		    if (leftArray[i] <= rightArray[j]) {
		      arr[k] = leftArray[i];
		      i++;
		    } else {
		        arr[k] = rightArray[j];
		        j++;
		    }
		    k++;
		  }//Fin del while.

		  /* Si quedan elementos por ordenar */
		  //Copiar los elementos restantes de leftArray[].
		  while (i < n1) {
		    arr[k] = leftArray[i];
		    i++;
		    k++;
		  }
		  //Copiar los elementos restantes de rightArray[].
		  while (j < n2) {
		    arr[k] = rightArray[j];
		    j++;
		    k++;
		  }
		}

	public void printArray(int arr[]) {
        int n = arr.length;
        for (int i=0; i<n; ++i) {
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }
}

