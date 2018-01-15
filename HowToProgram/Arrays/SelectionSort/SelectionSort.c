#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void printArray(int array [], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	puts("");
}

void swap(int array [], int indexOne, int indexTwo) {
	int temp = array[indexOne];
	array[indexOne] = array[indexTwo];
	array[indexTwo] = temp;
}

void selectionSort(int array [], int size) {
	int i, j, minIndex, minValue;

	for (i = 0; i < size; i++) {
		minIndex = i;
		minValue = array[i];
		for (j = i; j < size; j++) {
			if (array[j] < minValue) {
				minIndex = j;
				minValue = array[j];
			}
		}
		swap(array, i, minIndex);
	}
}

int main() {
	int array [SIZE] = {5, 2, 99, 75, 11, 28, 94, 74, 33, 60};
	
	puts("Original content of array: ");
	printArray(array, SIZE);	

	selectionSort(array, SIZE);

	puts("Sorted content of array: ");
        printArray(array, SIZE);

	return 0;
}
