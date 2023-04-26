#include <iostream>
#include "human.h"

class superhero : public human {
public:
    superhero(int T = 0, int Level = 2) {
        this -> PowerType = T;
        this -> Level = Level;
    }

    void ShowInfo() {
        info();
        cout << "New: " << this -> PowerType >> this -> Level;
    }

    void SuitOn(int T, int L) {
        this -> PowerType = T;
        this -> Level = L;
        cout << "Suit On: " << endl;
        ShowInfo(); 
    }

    void SavingWorld() {
        cout << "Defeat enemy." << endl;
    }

    void SuitOff() {
        this -> PowerType = 0;
        this -> Level = 2;
        cout << "Hide name." << endl;
    }


private:
    int PowerType;
    int Level;
};
