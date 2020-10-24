#pragma once

#include <iostream>

using namespace std;

class Pacientes
{
private:
	string id;
    string nombre;
	string telefono;
	string correo;
	string secuencia;
public:

    Pacientes(string, string, string, string, string);

    string getNombre() ;


    string getId() ;


    string getTelefono() ;


    string getCorreo() ;


    string getSecuencia() ;
    

};

