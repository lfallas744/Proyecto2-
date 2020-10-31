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

string Enfermedades::toString() {
    stringstream s;
    s << "Nombre: " << this->getNombre() << endl;
    s << "Secuencia: " << this->getSecuencia() << endl;
    return s.str();
}

Enfermedades* Enfermedades::buscaEnfermedad(string sec) {
    return nullptr;
}