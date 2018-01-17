// Thomas Mejia
// 1/16/2018
// Write a program that sorts an array using Insertion Sort.

#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void printArray(int array [], int size) { // function that prints array
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ",array[i]);
	}
	puts("");
}

void insertionSort(int array [], int size) {
	int i, j, // iterators
	    temp; // holds value of current iteration index

	for (int i = 1; i < size; i++) {
		j = i - 1; // j starts one index before i
		temp = array[i];
		while (j >= 0 && array[j] > temp) { // while index values are bigger than temp
			array[j+1] = array[j]; // keep copying values from previous index to after
			j--;
		}
		array[j+1] = temp; // copy temp value to index without a bigger previous value
	}
}

int main(void) {
	int array [SIZE] = {5, 22, 98, 76, 17, 90, 55, 37, 2, 88}; // array that holds integers

	// print original array
	puts("Original content of array: ");
	printArray(array, SIZE);

	// sort array using insertion sort
	insertionSort(array, SIZE);
	
	// print sorted array
	puts("Sorted content of array: ");
	printArray(array, SIZE);

	return 0;
}
