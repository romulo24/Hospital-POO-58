#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <iostream>
using namespace std;
#include "paciente.h"

class Hospital
{
private:
    string nombre;
    //Asociacion entre  clases
    Paciente *pacientes[10];
    int pacientesIngresados;
public:
    Hospital();
    Hospital(string nombre);
    void ingresarPaciente();
    void listarpacientes();
    void darDeAlta();
    void listarPacientesInfectados();
    void listarPacientesDadosAlta();
    int totalpacientes();
    int getPacientesIngresados() const;
};

#endif // HOSPITAL_H
