#include <stdio.h>

int main() {
	int Arr[] = {1,3,5,7,8};
	int i=0; /* Array element counter */
	int n=5; /* Array length */
	printf("The original array elements are:\n");
	for(i=0; i<n; i++) {
		printf("Arr[%d] = %d \n", i, Arr[i]);
	}
	return (0);
}
