// Persona.cpp
#include "Persona.hpp"
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iomanip>

static const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE"; // uso típico para DNI (simplificado)

void Persona::generarDNI() {
    // Generar número de 8 dígitos y una letra (muy simple)
    int numero = rand() % 90000000 + 10000000; // 8 dígitos
    int indice = numero % 23;
    std::snprintf(dni, sizeof(dni), "%08d%c", numero, letras[indice]);
}

void Persona::generarGenero() {
    genero = rand() % 2; // 0 o 1
}

Persona::Persona(int edad) : edad(edad) {
    // inicializamos generador de aleatorios una sola vez (si no está ya)
    static bool inicializado = false;
    if (!inicializado) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        inicializado = true;
    }
    generarGenero();
    generarDNI();
}

Persona::~Persona() {
    // nada especial que liberar
}

int Persona::getEdad() const { return edad; }
bool Persona::esMujer() const { return genero; }
void Persona::setEdad(int nuevaEdad) { edad = nuevaEdad; }

void Persona::mostrar() const {
    std::cout << "Edad: " << edad
              << " | Género: " << (genero ? "Mujer" : "Hombre")
              << " | DNI: " << dni << '\n';
}


