// Persona.hpp
#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>

class Persona {
private:
    bool genero;      // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];     // cadena simple para el DNI con letra

    void generarDNI(); // método privado para crear dni automáticamente
    void generarGenero(); // método privado para asignar género automáticamente

public:
    Persona(int edad);
    ~Persona();

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int nuevaEdad);
    void mostrar() const;
};

#endif // PERSONA_HPP

