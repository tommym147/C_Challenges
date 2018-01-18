// Thomas Mejia
// 1/17/2018
// Write a recursive function that prints an array and returns nothing.

#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void printArray(int array [], int size) { // function that prints each element in array recursively
	size--;
	if (size < 0) { // base case
		return;
	}
	printArray(array, size);
	printf("%d ",array[size]);	
}

int main(void) {
	int array [SIZE] = {5, 33, 21, 99, 75, 87, 90, 34, 23, 98};

	puts("Content of array: ");
	printArray(array, SIZE);
	puts("");

	return 0;
}
