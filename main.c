/*
Program to find largest element of array
*/

#include <stdio.h>

int largestElement(int arr[], int n)
{
	int i;
	int max = arr[0];
	for (i =0; i < n; i++)
		if (arr[i] > max )	// loops until there is an element in the array thats larger than max
		{
			max = arr[i]; // max becomes the largest elmenet in the given array
		}
	return max;
}

int main()
{
	int arr[] = { 10, 324, 45, 90, 9808 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("The largest element of the array is %d", largestElement(arr, n));
	
	return 0;
}