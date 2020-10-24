#include "Pacientes.h"
#include "CsvWriter.h"
#include "CsvReader.h"
#include "TransformadorCsv.h"
int main() {
	Pacientes* p1 = new Pacientes("27514443699", "Felix", "AAA", "BB", "CCC");
	
	CsvWriter<Pacientes*>* v = new CsvWriter<Pacientes*>("prueba.txt", new TransformadorCsvPersona());

	v->escribir(p1);

	delete p1;
	delete v;
	return 0;
}