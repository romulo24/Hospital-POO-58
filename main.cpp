#include <iostream>
#include "paciente.h"
#include "hospital.h"
int Paciente::totalPacientes = 0;
using namespace std;

int main()
{
    cout << "= = SISTEMA DE REGISTRO DE PACIENTES = =" << endl;
    cout<< endl;

    string nombre;
    cout << "Ingrese el nombre del hospital: ";
    getline(cin >> ws, nombre);
    Hospital *hospital =new Hospital (nombre);
    int opc = 0;
    do{
        cout << "\n- - MENU PRINCIPAL - -" << endl;
        cout << "1. Ingresar un paciente" << endl;
        cout << "2. Listar todos los pacientes" << endl;
        cout << "3. Listar pacientes con Covid-19." << endl;
        cout << "4. Listar pacientes dados de alta." << endl;
        cout << "5. Dar de alta a un paciente." << endl;
        cout << "7. Total de pacientes existentes." << endl;
        cout << "7. Salir." << endl;
        cout << "Ingrese su opcion: ";
        cin >> opc;
        switch(opc){
        case 1:
            hospital->ingresarPaciente();
            break;
        case 2:
            hospital->listarpacientes();
            break;
        case 3:
            hospital->listarPacientesInfectados();
            break;
        case 4:
            hospital->listarPacientesDadosAlta();
            break;
        case 5:
            hospital->darDeAlta();
            break;
        case 6:
            hospital->totalpacientes();
            break;
        default:
            cout << "Opción no válida!" << endl;
        }
    }while(opc != 7);

    cout << "Gracias por utilizar este programa..." << endl;
}
