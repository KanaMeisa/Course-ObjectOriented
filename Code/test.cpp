#include <iostream>
using namespace std;


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void sort_descending(int *a, int *b, int *c) {
    if (*a < *b) {
        swap(a, b);
    }
    if (*a < *c) {
        swap(a, c);
    }
    if (*b < *c) {
        swap(b, c);
    }
}


int main() {

}
