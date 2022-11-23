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
        /*
         *
         *Determine whether to move only one disk from the first pyramid,
         * and if so, move the disk to the source tower, which is the first tower,
         * to the destination tower, which is the last
         *
         */
        if (n == 1) {
            cout << "Mover disco " << n << " de " << Sour << " a " << Des << endl;
        } else {
            /*
             *
             * On the other hand, if we have more than one disk, you must first move the first n disks -1
             * from the source tower to the auxiliary tower, then you must move the disk left in the source tower
             * to the destination tower.
             *Finally, you must move the n disks -1 that are in the auxiliary tower to the destination tower.
             *
             *
             * The formula for moving n disks will always be P(n)= 2*n -1
             *
             * Example: moving 7 disks would be so p(7) = 2 * 7 -1 that this equals 127 steps
             */
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