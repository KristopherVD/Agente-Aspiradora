#include <iostream>
using namespace std;

int main()
{
    // Estado de los cuartos: true = sucio, false = limpio
    bool cuartos[2] = {true, false};
    // Posición inicial de la aspiradora (0 = cuarto A, 1 = cuarto B)
    int posicion = 0;

    cout << "Encendiendo la aspiradora..." << endl;

    // El bucle continúa hasta que ambos cuartos estén limpios
    while (cuartos[0] || cuartos[1])
    {
        cout << "La aspiradora esta en el cuarto " << (posicion == 0 ? "A" : "B") << endl;

        // Verificamos si el cuarto está sucio
        if (cuartos[posicion])
        {
            cout << "El cuarto esta sucio. Limpiando..." << endl;
            cuartos[posicion] = false;
            cout << "Cuarto limpio!" << endl;
        }
        else
        {
            cout << "El cuarto ya esta limpio." << endl;
        }

        // Moverse al otro cuarto aunque ya quede todo limpio
        posicion = (posicion == 0) ? 1 : 0;
        cout << "Moviendose al cuarto " << (posicion == 0 ? "A" : "B") << endl
             << endl;
    }

    cout << "Ambos cuartos estan limpios. Tarea terminada." << endl;

    return 0;
}