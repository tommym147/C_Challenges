// Thomas Mejia
// 1/15/2018
// Write a program that simulates the rolling of two dice 36,000 times and tallies 
// the sums of each roll into an array.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 11

void printSums(int array [], int size) {
	int i; // loop counter
	for (i = 0; i < size; i++) {
                printf("Number of times %d rolled: %d\n", (i+2), array[i]);
        }
}

void rolls(int array []) {
	int sum, i; // sum holds sum of rolls, i is loop counter
	srand(time(NULL)); // helps generate random numbers

        for (i = 0; i < 36000; i++) {
                sum = (1 + (rand() % 6)) + (1 + (rand() % 6)); // roll twice and add
                array[(sum - 2)]++; // increment index relative to sum
        }

}

int main() {
	int array [SIZE] = {0}; // array to hold sums
	
	rolls(array); // simulate rolling dice and record sums into array
	printSums(array, SIZE); // print sums
		
	return 0;
}
