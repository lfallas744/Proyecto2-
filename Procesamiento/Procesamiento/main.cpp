#include"Pacientes.h"
#include"CsvReader.h"
#include"CsvWriter.h"
#include"TransformadorCsv.h"

using namespace std;
int main() {

	/*IWriter<Persona*>* writer = new CsvWriter<Persona*>("personas.csv", new TransformadorCsvPersona());
	Persona* persona1 = new Persona("Pablo", 10);
	Persona* persona2 = new Persona("Jose", 12);
	Persona* persona3 = new Persona("Roger", 16);

	writer->escribir(persona1);
	writer->escribir(persona2);
	writer->escribir(persona3);

	delete persona1;
	delete persona2;
	delete persona3;
	delete writer;*/

	IReader<Enfermedades*>* readerEnfermedades = new CsvReader<Enfermedades*>("enfermedades.csv", new TransformadorCsvEnfermedades());
	vector<Enfermedades*>* enfermedad = readerEnfermedades->leerTodos();

	for (auto& enfermedades : *enfermedad)
	{
		cout << enfermedades->toString() << endl;
	}

	IReader<Pacientes*>* readerPacientes = new CsvReader<Pacientes*>("pacientes.csv", new TransformadorCsvPaciente());
	vector<Pacientes*>* paciente = readerPacientes->leerTodos();

	for (auto& pacientes : *paciente)
	{
		cout << pacientes->toString() << endl;
	}

	

	delete enfermedad;
	delete readerEnfermedades;
	delete paciente;
	delete readerPacientes;
	return 0;
}