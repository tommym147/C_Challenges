// Thomas Mejia
// 1/14/2018
// Write a program that sorts an array using bubble sort.

#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void printArray(int array [], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ",array[i]);
	}
	puts("");
}

void swap(int array [], int indexOne, int indexTwo) {
	int temp = array[indexOne];
	array[indexOne] = array[indexTwo];
	array[indexTwo] = temp;
}

void bubbleSort(int array [], int size) {
	int i, j;
	for(i = size - 1; i >= 0; i--) {
		for (j = 0; j < i; j++) {
			if (array[j] > array[j+1]) {
				swap(array, j, j+1);
			}
		}
	}
}

int main(void) {
	int array[SIZE] = {44, 3, 87, 62, 90, 1, 7, 44, 76, 23};
	
	puts("Original content of array: ");
	printArray(array, SIZE);

	bubbleSort(array, SIZE);

	puts("Sorted content of array: ");
        printArray(array, SIZE);

	return 0;
}
