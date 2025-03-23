

/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */


    void insert(int arr[], int i)
    {
        // Your code here  
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int i,j,x;
	for(i=0;i<n;i++)
	{
		j=i-1;
		x=arr[i];
		while(j>-1&&arr[j]>x)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=x;
	}
    }


