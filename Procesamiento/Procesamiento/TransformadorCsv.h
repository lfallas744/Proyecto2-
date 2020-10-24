#pragma once
#include<vector>
#include<string>
#include "Pacientes.h"
using namespace std;

template<class T>
class ITransformadorCsv
{
public:
	virtual vector<string>* toStringVector(T elemento) = 0;
	virtual T fromStringVector(vector<string>* vector) = 0;
	virtual ~ITransformadorCsv() = default;
};

class TransformadorCsvPersona : public ITransformadorCsv<Pacientes*>
{
public:
	vector<string>* toStringVector(Pacientes* elemento) override
	{
		vector<string>* campos = new vector<string>();
		campos->push_back(elemento->getId());
		campos->push_back(elemento->getNombre());
		campos->push_back(elemento->getTelefono());
		campos->push_back(elemento->getCorreo());
		campos->push_back(elemento->getSecuencia());
		return campos;
	}

	Pacientes* fromStringVector(vector<string>* vector) override
	{
		return new Pacientes(vector->at(0), vector->at(1), vector->at(2), vector->at(3), vector->at(4));
	}
};