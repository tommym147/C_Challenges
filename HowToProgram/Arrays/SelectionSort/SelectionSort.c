// Thomas Mejia
// 1/15/2018
// Write a progam that sorts an array using Selection Sort.

#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void printArray(int array [], int size) { // function that prints array
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	puts("");
}

void swap(int array [], int indexOne, int indexTwo) { // function that swaps two values
	int temp = array[indexOne]; // temp holds first value
	array[indexOne] = array[indexTwo]; // second value is copied to first
	array[indexTwo] = temp; // temp is copied to second
}

void selectionSort(int array [], int size) { // sorts array using selction sort
	int i, j, // iterators
	    minIndex, // records index with minimum value
	    minValue; // records minimum value in array iteration

	for (i = 0; i < size; i++) {
		// minimum index and values are defined in each iteration
		minIndex = i;
		minValue = array[i];
		for (j = i; j < size; j++) {
			// find minimum value in iteration and record it with it's index
			if (array[j] < minValue) {
				minIndex = j;
				minValue = array[j];
			}
		}
		swap(array, i, minIndex); // swap value with iteration i index
	}
}

int main(void) {
	int array [SIZE] = {5, 2, 99, 75, 11, 28, 94, 74, 33, 60}; // array that holds integers
	
	// print original array
	puts("Original content of array: ");
	printArray(array, SIZE);	

	// sort array with selection sort
	selectionSort(array, SIZE);

	// print sorted array
	puts("Sorted content of array: ");
        printArray(array, SIZE);

	return 0;
}
