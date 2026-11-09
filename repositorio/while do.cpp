#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Introduce un numero (0 para salir): ";
        cin >> numero;
        cout << "Has introducido: " << numero << "\n";
    } while (numero != 0);

    cout << "¡Programa terminado!" << endl;
    return 0;
}
