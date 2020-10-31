#pragma once
#include<string>
#include <iostream>
#include<sstream>
#include"Enfermedades.h"
#include<vector>

using namespace std;

class Pacientes
{
private:
	string id;
    string nombre;
	string telefono;
	string correo;
	string secuencia;
    vector<Enfermedades*>* enfermedad;
public:

    Pacientes(string id="", string nombre="", string telefono="", string correo="", string secunecia="",vector<Enfermedades*>* enfermedades=nullptr);
    string toString();
    string getNombre();


    string getId() ;


    string getTelefono() ;

    void transformaSecuencia(string);
    string getCorreo() ;
    vector<Enfermedades*>* getVectorEnfermedades();

    string getSecuencia() ;
    

};

