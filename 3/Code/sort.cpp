#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i ++) {
        for (int j = 0; j < n - i - 1; j ++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 
}


//原理是在未排序序列中找到最小（或最大）元素，并将其放到已排序序列的末尾
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


void insertionSort(int arr[], int n) {
    int i, j;

    for (i = 1; i < n; i++) {
        j = i - 1;      //扫描从i前面一个元素开始

        while (j >= 0 && arr[j] > arr[i]) {
            arr[j + 1] = arr[j];    //如果已经是正确的顺序，就将各元素右移一位
            j = j - 1;
        }

        //循环结束。比如是在i处结束的循环，那么，i+1位置上的元素已经被移到i+2的位置上去了
        //是空位，而i又比key小，i+2比key大，所以可以把key插入到i+1的位置上
        arr[j + 1] = arr[i];
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

