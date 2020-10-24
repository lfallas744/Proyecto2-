#include "Pacientes.h"

Pacientes::Pacientes(string id, string nom, string tel, string correo, string secuencia)
{
    this->id = id;
    this->nombre = nom;
    this->telefono = tel;
    this->correo = correo;
    this->secuencia = secuencia;
}

string Pacientes::getNombre() 
{
    return nombre;
}



string Pacientes::getId() 
{
    return id;
}



string Pacientes::getTelefono() 
{
    return telefono;
}



string Pacientes::getCorreo() 
{
    return correo;
}



string Pacientes::getSecuencia() 
{
    return secuencia;
}



