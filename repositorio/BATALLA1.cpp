#include <iostream>
#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura para los personajes
struct Personaje {
    string nombre;
    int fuerza;
};

int main() {
    // Crear el objeto para el Personaje 1
    Personaje p1;
    p1.nombre = "Sub Zero";
    p1.fuerza = 90;
    
    // Crear el objeto para el Personaje 2
    Personaje p2;
    p2.nombre = "Scorpion";
    p2.fuerza = 95;
    
    // Mostrar los datos en pantalla usando el operador punto (.)
    cout << "--- BATALLA DE PERSONAJES ---" << endl;
    cout << p1.nombre << " tiene " << p1.fuerza << " puntos de fuerza." << endl;
    cout << p2.nombre << " tiene " << p2.fuerza << " puntos de fuerza." << endl;
    cout << "-----------------------------" << endl;
    
    // Comparar las fuerzas para ver quien gana
    if (p1.fuerza > p2.fuerza) {
        cout << "El mas fuerte es " << p1.nombre << "." << endl;
    }
    else if (p2.fuerza > p1.fuerza) {
        cout << "El mas fuerte es " << p2.nombre << "." << endl;
    }
    else {
        cout << "Tienen la misma fuerza." << endl;
    }
    
    return 0;
} 
