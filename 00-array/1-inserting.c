#include <stdio.h>

int main() {
	int Arr[] = {1, 3, 5, 7, 8};
	int i=0; /*Counter*/
	int n=5; /* Initial array length */
	int j = n; /* Used during insertion */
	int item = 10; /* New item to be inserted */
	int k=3; /* Insertion index */

	printf("The original array elements are \n");
	for (i=0; i<n; i++) {
		printf("Arr[%d] = %d\n", i, Arr[i]);
	}
	
	n = n+1; // Extending Array size to hold the insertion

	while(j>=k) {
		Arr[j+1] = Arr[j];
		j = j- 1;
	}
	Arr[k] = item; /* New item inserted here */
	
	printf("The array elements after insertion are \n");

	for(i=0; i<n; i++) {
		printf("Arr[%d] = %d\n", i, Arr[i]);
	}
}
