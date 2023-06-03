#include <iostream>
using namespace std;

double a[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& set(int i) {
    return a[i];
}


int main() {
    cout << "Original Data:" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "] = ";
        cout << a[i] << endl; 
    }


    cout << "After changing:" << endl;

    set(1) = 20.23;
    set(2) = 70.8;

    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "] = ";
        cout << a[i] << endl; 
    }


    return 0;
}


