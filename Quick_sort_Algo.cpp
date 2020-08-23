/*
-> 
*/

/*
Partition approaches
1. Naive Approach : 
		--> This is stable but uses auxilury space
*/
void naivePartition(int a[],int l, int h, int pivot){
  int temp[h-l+1], index=0;
  for(int i = 0; i<=h; i++){
  //Store all the smaller element to pivot element into the temp array.
    if(a[i] <= a[pivot]){
      temp[index++] = a[i];
    }
  }
  for(int j = 0; j<=h; j++){
  //Store all the elements greater then pivot elements into the temp arry
    if(a[i] > a[pivot]){
      temp[index++] = a[i];
    }
  }
  //Copy all the elements of temp in origional array
  for(int i = 0; i<=h; i++){
     a[i]=temp[i];
  }
}

/*
2. Lomuto Partition : returns the index of pivot element after swapping
		--> This is not that stable but works in O(1) space 
*/
int lomutoPartation(int a[], int l, int h) {
		int pivot = arr[h];
		int i = l-1;
		for(int j = l; j<=h-1; j++) {
					if(a[j]<pivot){
						i++;
						swap(a[j],a[i]);
					}
		}
		swap(a[i+1],pivot);
		return (i+1);
}
/*
arr = {8,4,7,9,3,10,5}
	->Quick Sort is have O(N^2) wrost case time but despite having larger time complaxity it prefered over other algorithms becase
		* Works in O(1) Space
		* Tail recursive : The last thing happen is a recursive function call
		* cache Friendly
		* Average time complaxity : O(nlog(n))
*/
void quickSort(int arr[],int l, int h) {
		if(l<h) {
				int p = lomutoPartition(arr, l, h);
				quickSort(arr,l,p-1);
				quickSort(arr,p+1,h);
		}
}
