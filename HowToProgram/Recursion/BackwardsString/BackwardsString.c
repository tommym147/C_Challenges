// Thomas Mejia
// 1/17/2018
// Write a program that prints a string in reverse recursively.

#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

void printStringBackwards(char str [], int size) {
	size--;
	if (size < 0) { // base case
		return;
	}
	printf("%c ",str[size]); // print character
	printStringBackwards(str, size); // call function recusively until size is less than 0
}

void printString(char str [], int size) {
	size--;
	if (size < 0) { // base case
		return;
	}
	printString(str, size); // keep calling function recursively to print from 0
	printf("%c ",str[size]);
}

int main(void) {
	char str [SIZE] = {'H', 'e', 'l', 'l', 'o'}; // string
	
	// print string normally
	puts("Orignal String: ");
	printString(str, SIZE);
	puts("");

	// print string backwards
	puts("String Backwards: ");
	printStringBackwards(str, SIZE);
	puts("");

	return 0;
}
