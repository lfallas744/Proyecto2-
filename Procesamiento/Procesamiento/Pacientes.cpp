#include "Pacientes.h"

Pacientes::Pacientes(string id, string nom, string tel, string correo, string secuencia)
{
    this->id = id;
    this->nombre = nom;
    this->telefono = tel;
    this->correo = correo;
    this->secuencia = secuencia;
}
string Pacientes::toString() {
    stringstream s;
    s << "Id: " << this->getId() << endl;
    s << "Nombre: " << this->getNombre() << endl;
    s << "Telefono: " << this->getTelefono() << endl;
    s << "Correo: " << this->getCorreo() << endl;
    s << "Secuencia: " << this->getSecuencia() << endl;
    return s.str();
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



