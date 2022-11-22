#include <conio.h>

#include <iostream>

using namespace std;

class Disco {
private:
    int numeroDiscos;

public:
    int getNumeroDiscos() const {
        return numeroDiscos;
    }

    void setNumeroDiscos(int numeroDiscos) {
        Disco::numeroDiscos = numeroDiscos;
    }

    void HANOI(int n, char Sour, char Aux, char Des) {
        if (n == 1) {
            cout << "Mover disco " << n << " de " << Sour << " a " << Des << endl;
        }else{
            HANOI(n - 1, Sour, Des, Aux);
            cout << "Mover disco " << n << " de " << Sour << " a " << Des << endl;
            HANOI(n - 1, Aux, Sour, Des);
        }

    }
};

//main program
int main() {
    int n;

    cout << "Numeros de Discos:";
    cin >> n;
    //calling the HaNOI
    Disco().HANOI(n, 'A', 'B', 'C');

}