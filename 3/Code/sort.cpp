#include <iostream>
using namespace std;

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i ++) {
//         for (int j = 0; j < n - i - 1; j ++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     } 
// }


void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (int i = 0; i < n - 1; i ++) {
        min_idx = i;
        for (int j = i + 1; j < n; j ++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}


int main(){
    int a[] = {3, 2, 4, 5, 1, 8, 7, 6};
    int n = sizeof(a) / sizeof(a[0]);
    selectionSort(a, n);

    for (int i = 0; i < n; i ++){
        cout << a[i] << endl;
    }

    return 0;
}

