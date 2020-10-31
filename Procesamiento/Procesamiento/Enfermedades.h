#pragma once
#include<string>
#include <iostream>
#include<sstream>

using namespace std;

class Enfermedades
{
private:
	string nombre;
	string secuencia;

public:
	Enfermedades(string, string);
	string toString();

    string getNombre();

    string getSecuencia();
	Enfermedades* buscaEnfermedad(string);

};

