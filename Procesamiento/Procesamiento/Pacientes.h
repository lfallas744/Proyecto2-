#pragma once
#include<string>
#include <iostream>
#include<sstream>

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
    string toString();
    string getNombre() ;


    string getId() ;


    string getTelefono() ;


    string getCorreo() ;


    string getSecuencia() ;
    

};

