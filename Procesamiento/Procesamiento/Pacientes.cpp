#include "Pacientes.h"

Pacientes::Pacientes(string id, string nombre, string telefono, string correo,string secuencia, vector<Enfermedades*>* enfermedades)
{
    this->id = id;
    this->nombre = nombre;
    this->telefono = telefono;
    this->correo = correo;
    this->secuencia = secuencia;
    this->enfermedad = enfermedades;
}
string Pacientes::toString() {
    stringstream s;
    s << "Id: " << this->getId() << endl;
    s << "Nombre: " << this->getNombre() << endl;
    s << "Telefono: " << this->getTelefono() << endl;
    s << "Correo: " << this->getCorreo() << endl;
    for (auto& enfermedades : *enfermedad)
    {
        s << enfermedades->toString() << endl;
    }
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
vector<Enfermedades*>* Pacientes::getVectorEnfermedades() {
    return enfermedad;
}


string Pacientes::getSecuencia() 
{
    return secuencia;
}

void Pacientes::transformaSecuencia(string sec) {
    int cont = 0;
    while (cont <= secuencia.length()) {
        
    }
}

