// Thomas Mejia
// 1/14/2018
// Write a program that sorts an array using bubble sort.

#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void printArray(int array [], int size) { // function to print array
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ",array[i]);
	}
	puts("");
}

void swap(int array [], int indexOne, int indexTwo) { // function to two values
	int temp = array[indexOne]; // temp holds first value
	array[indexOne] = array[indexTwo]; // second value is copied to first
	array[indexTwo] = temp; // temp is copied to second
}

void bubbleSort(int array [], int size) { // function to sort array with bubble sort
	int i, j; // iterators
	for(i = size - 1; i >= 0; i--) { // i starts from end to beginning
		for (j = 0; j < i; j++) { // j starts from beginning to i
			if (array[j] > array[j+1]) {
				swap(array, j, j+1); // swap biggest values to the end (i index)
			}
		}
	}
}

int main(void) {
	int array[SIZE] = {44, 3, 87, 62, 90, 1, 7, 44, 76, 23}; // array that holds integers
	
	// print orginal orray
	puts("Original content of array: ");
	printArray(array, SIZE);

	// sort array with bubble sort
	bubbleSort(array, SIZE);

	// print sorted array
	puts("Sorted content of array: ");
        printArray(array, SIZE);

	return 0;
}
