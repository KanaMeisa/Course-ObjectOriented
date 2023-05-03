#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


bool isPrime(int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    string word;
    cin >> word;

    int count[27];
    for (int i = 1; i <= 26; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < word.length(); i++) {
        count[(int)i - 96] ++;
    }

    int max = 0;
    int min = 100;
    for (int i = 1; i <= 26; i++) {
        if (count[i] < min && count[i] != 0) {
            min = count[i];
        } else if (count[i] > max) {
            max = count[i];
        }
    }

    if (isPrime(max - min)) {
        cout << "Lucky Word" << endl;
        cout << max - min;
    } else {
        cout << "No Answer" << endl;
        cout << "0";
    }

    return 0;
}