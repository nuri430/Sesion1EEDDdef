// main.cpp
#include "Persona.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    // Crear lista de edades 18 a 27 (10 valores) y mezclar para que no estén ordenadas
    std::vector<int> edades;
    for (int e = 18; e <= 27; ++e) edades.push_back(e);
    std::random_shuffle(edades.begin(), edades.end());

    // Crear 10 personas con esas edades
    std::vector<Persona> personas;
    for (int i = 0; i < 10; ++i) {
        personas.emplace_back(edades[i]);
    }

    // Mostrar
    std::cout << "Lista de 10 personas:\n";
    for (const auto &p : personas) p.mostrar();

    return 0;
}

