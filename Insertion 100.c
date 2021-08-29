// C program for insertion sort 
#include <math.h> 
#include <stdio.h> 
#include<time.h>
#include<unistd.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

/* Driver program to test insertion sort */
int main() 
{
	double time_spent = 0.0;
	clock_t begin = clock();
	 
	int arr[] = { 18,13,14,85,42,24,4,49,73,67,76,19,10,4,35,59,50,27,17,56,76,64,45,53,57,41,96,72,91,79,74,92,51,70,34,57,46,77,35,54,26,28,96,62,86,49,70,30,51,36,29,43,83,5,15,38,31,28,12,41,1,31,61,27,25,99,78,26,95,19,70,92,40,51,99,84,47,18,68,80,51,27,13,41,86,53,30,23,60,7,36,96,94,87,41,38,11,43,30,54 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, n); 
	printArray(arr, n); 
	
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time elapsed is %f seconds", time_spent); 

	return 0; 
} 

