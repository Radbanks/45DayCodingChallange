#include <bits/stdc++.h>
/*
    Time Complexity: O(N ^ 2)
    Space Complexity: O(1)

    Where 'N' is the size of array/list.
*/
int findMajorityElement(int arr[], int n) {
	// Iterating each element in the array/list and check if it is a majority element.
	for(int i = 0; i < n ; i++) {	
		// Variable to store the frequency of the current element at index 'i'.
		int maxCount = 0;

		// Iterating the array/list to count the frequency of the current element at index 'i'.
		for(int j = 0; j < n; j++) {
			// Increment the count of variable if an occurrence of the current element is observed.
			if(arr[j] == arr[i]) {
				maxCount++;
			}	
		}

		// If count of any element exceeds 'n' / 2, then it is the majority element.
		if(maxCount > n/2) {
			return arr[i];
		}
	}
	// If no majority element found, return -1.
	return -1;
}
