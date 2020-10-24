#pragma once

#include <iostream>

using namespace std;

class Pacientes
{
private:
	double id;
    string nombre;
	string telefono;
	string correo;
	string secuencia;
public:

    Pacientes(double, string, string, string, string);

    string getNombre() ;


    double getId() ;


    string getTelefono() ;


    string getCorreo() ;


    string getSecuencia() ;
    

};

