#include <stdio.h>

int main() {
	int Arr[] = {1, 3, 5, 7, 8};
	int k=3, n=5; /* deletion index, original array size */
	int i, j;

	printf("The original array elements are :\n");

	for(i=0; i<n; i++) {
		printf("Arr[%d] = %d \n", i, Arr[i]);
	}

	j = k;
	while(j < n) {
		Arr[j-1] = Arr[j];
		j = j+1;
	}

	n = n-1; /* Resize array size after deletion */

	printf("The array elements after deletion :\n");

	for(i=0; i<n; i++) {
		printf("Arr[%d] = %d \n", i, Arr[i]);
	}
}
