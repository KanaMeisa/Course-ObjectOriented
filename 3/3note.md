# 3Note-C++基础算法

在C++中，有一些常见的算法是值得掌握的。这些算法并不限于C++，它们在计算机科学和编程领域都十分关键。以下是一些必会的算法：

## 排序算法：

### 冒泡排序（Bubble Sort）

```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

### 选择排序（Selection Sort）

原理是在未排序序列中找到最小（或最大）元素，并将其放到已排序序列的末尾

```cpp

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // 从未排序序列中找到最小元素的索引，然后将其与已排序序列的末尾交换
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // 交换 arr[min_idx] 和 arr[i]
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
```

### 插入排序（Insertion Sort）

```cpp

void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i]; // 选取未排序序列中的第一个元素
        j = i - 1;

        // 在已排序序列中从后向前扫描，找到合适的插入位置
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 将大于key的元素向右移动一位
            j = j - 1;
        }
        arr[j + 1] = key; // 插入key到合适的位置
    }
}
```

### 快速排序（Quick Sort）

快速排序是一种分治算法，它的基本思想是在待排序的序列中选择一个基准元素，将序列分为两部分，其中一部分的所有元素都小于基准元素，另一部分的所有元素都大于基准元素，然后递归地对这两部分进行排序

```cpp

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 选择最后一个元素作为基准
    int i = (low - 1); // 小于基准元素的索引位置

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++; // 如果当前元素小于基准，交换arr[i]和arr[j]
            swap(arr[i], arr[j]);
        }
    }
    // 将基准元素放到正确的位置
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // 分区索引

        // 分别对左右两个子数组进行递归排序
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```


### 归并排序（Merge Sort）

归并排序是一种分治算法，它的基本思想是将待排序的序列拆分成两个子序列，然后对这两个子序列分别进行排序，最后将这两个有序子序列合并成一个有序序列

```cpp
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2]; // 创建临时数组

    // 将原数组的元素复制到临时数组
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // 合并两个临时数组
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 将剩余元素复制回原数组
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // 递归地对两个子序列进行排序
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // 合并已排序的子序列
        merge(arr, left, mid, right);
    }
}
```

### 堆排序（Heap Sort）
堆排序是一种基于二叉堆（通常是最大堆）数据结构的比较排序算法。堆排序可以分为两个主要步骤：建立最大堆和排序

```cpp
void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}
```
  
查找算法：

- 线性查找（Linear Search）

```cpp
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // 返回目标值在数组中的索引
        }
    }
    return -1; // 如果没有找到目标值，返回-1
}
```

- 二分查找（Binary Search）
下面是查找左边界和右边界的示例代码

```cpp
int leftBound(int arr[], int n, int target) {
    int left = 0, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

int rightBound(int arr[], int n, int target) {
    int left = 0, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left - 1;
}
```


图算法：

- 深度优先搜索（DFS, Depth-First Search）
- 广度优先搜索（BFS, Breadth-First Search）
- 短路径（如Dijkstra算法）
- 最小生成树（如Kruskal算法、Prim算法）
  
字符串匹配算法：

- 朴素字符串匹配（Naive String Matching）
- KMP算法（Knuth-Morris-Pratt Algorithm）
  
动态规划（Dynamic Programming）：

- 背包问题（Knapsack Problem）
- 最长公共子序列（Longest Common Subsequence）
- 最长递增子序列（Longest Increasing Subsequence）

分治算法（Divide and Conquer）：

- 快速幂运算（Fast Exponentiation）
- Strassen矩阵乘法（Strassen's Matrix Multiplication）

贪心算法（Greedy Algorithm）：

- 霍夫曼编码（Huffman Coding）
- 最小生成树（如Kruskal算法、Prim算法）
- 任务调度问题（Task Scheduling Problem）
