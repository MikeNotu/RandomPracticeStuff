	/*Con sistema paralelo*/
	import java.util.Random;
	import java.util.concurrent.*;

	public class CLASE {

	    public static final int ARRAY_SIZE = 1000000;

	    public static void main(String[] args) {
	    	System.out.println("Arreglo Sin Ordenar:\n");
	        ForkJoinPool pool = new ForkJoinPool();
	        int[] array = createArray(ARRAY_SIZE);
	        long startTime;
	        long endTime;

	        MergeSort mergeSort = new MergeSort(array, 0, array.length - 1);
	        startTime = System.currentTimeMillis();

	        pool.invoke(mergeSort);

	        endTime = System.currentTimeMillis();
	        System.out.println("Tiempo que tomo: " + (endTime - startTime) + " milisegundos");
	        
	        
	        
	        CLASE.printArray(array);
	    }

	    private static void printArray(int[] array) {
		
	    		System.out.println("Arreglo Ordenado:\n");
	            int n = array.length;
	            for (int i=0; i<n; ++i) {
	                System.out.println(array[i] + " ");
	            }
	            System.out.println();
	              
	    	
		}

		private static int[] createArray(final int size) {
	        int[] array = new int[size];
	        Random rand = new Random();
	        for (int i = 0; i < size; i++) {
	            array[i] = rand.nextInt(1000);
	            System.out.println(array[i]);
	        }
	        return array;
	    }
	}


	class MergeSort extends RecursiveAction {
	    private int array[];
	    private int left;
	    private int right;

	    public MergeSort(int[] array, int left, int right) {
	        this.array = array;
	        this.left = left;
	        this.right = right;
	    }

	
	    @Override
	    protected void compute() {
	        if (left < right) {
	            int mid = (left + right) / 2;
	            RecursiveAction leftSort = new MergeSort(array, left, mid);
	            RecursiveAction rightSort = new MergeSort(array, mid + 1, right);
	            invokeAll(leftSort, rightSort);
	            merge(left, mid, right);
	        }
	    }


	    private void merge(int left, int mid, int right) {
	        int temp [] = new int[right - left + 1];
	        int x = left;
	        int y = mid + 1;
	        int z = 0;
	        while (x <= mid && y <= right) {
	            if (array[x] <= array[y]) {
	                temp[z] = array[x];
	                z++;
	                x++;
	            } else {
	                temp[z] = array[y];
	                z++;
	                y++;
	            }
	        }
	        while (y <= right) {
	            temp[z++] = array[y++];
	        }
	        while (x <= mid) {
	            temp[z++] = array[x++];
	        }

	        for (z = 0; z < temp.length; z++) {
	            array[left + z] = temp[z];
	        }

    }
	    
	}
