#include "Enfermedades.h"

Enfermedades::Enfermedades(string nombre , string secuencia)
{
    this->nombre = nombre;
    this->secuencia = secuencia;
}

string Enfermedades::getNombre() 
{
    return nombre;
}

string Enfermedades::getSecuencia() 
{
    return secuencia;
}

