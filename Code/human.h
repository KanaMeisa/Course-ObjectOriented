#include <iostream>
using namespace std;

class human {
public:
    human(int H = 170, int W = 60, char G = 'M') {
        this -> Height = H;
        this -> Weight = W;
        this -> Gender = G;
    }

    void info() {
        cout << this -> Height << " " << this -> Weight << " " << this -> Gender << endl;
    }

    void Live() {
        cout << "Eat and play." << endl;
    }

    void Work() {
        cout << "Work hard." << endl;
    }

    void Entertain() {
        cout << "Play." << endl;
    }


private: 
    int Height;
    int Weight;
    char Gender;
};
