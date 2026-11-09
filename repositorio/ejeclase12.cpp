#include <iostream>
#include <string>
using namespace std;

int main() {
    // Personaje 1
    string nombre1 = "Sub Zero";
    int fuerza1 = 90;
    
    // Personaje 2
    string nombre2 = "Scorpion";
    int fuerza2 = 95;
    
    // Mostrar los datos en pantalla 
    cout << "--- BATALLA DE PERSONAJES ---" << endl;
    cout << nombre1 << " tiene " << fuerza1 << " puntos de fuerza." << endl;
    cout << nombre2 << " tiene " << fuerza2 << " puntos de fuerza." << endl;
    cout << "-----------------------------" << endl;
    
    // Comparar las fuerzas para ver quien gana 
    if (fuerza1 > fuerza2) {
        cout << "El mas fuerte es " << nombre1 << "." << endl;
    }
    else if (fuerza2 > fuerza1) {
        cout << "El mas fuerte es " << nombre2 << "." << endl;
    }
    else {
        cout << "Tienen la misma fuerza." << endl;
    }
    
    return 0;
}
