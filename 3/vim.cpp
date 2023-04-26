#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    
    while (1) {
        while (arr[low] < pivot) {
	    low++;
    	}

	while (arr[high] > pivot) {
	    high++;
    	}

	if (low <= high) {
	    return low
	}

	swap(arr[low], arr[high]);
    }
}

void QuickSort(int arr[], int low, int high) {
    
