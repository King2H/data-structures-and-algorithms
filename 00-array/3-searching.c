#include <stdio.h>

int main() {
	int Arr[] = {1, 3, 5, 7, 8};

	int i=0, j=0, n=5, item=7;

	printf("The original array elements are \n");

	for(i=0; i<n; i++) {
		printf("Arr[%d] = %d \n", i, Arr[i]);
	}

	while(j < n) {
		if(Arr[j] == item) {
			break;
		}
		j = j+1;
	}
	printf("Searched and found element %d at position %d\n", item, j+1);
}
