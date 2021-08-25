#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include <sstream>
using namespace std;
class Paciente
{
private:
    //Atributos de la clase Paciente
    int id;
    string nombre;
    int edad;
    char genero;
    float altura;
    float masa;
    bool alta;
    bool positivo;
    //contador que permite llevar el registro de los pacientes ingresados
    static int totalPacientes;
    //Metodos Privados
    string obtenerGenero();
    string estaContagiado();
    string estaDadoDeAlta();
public:
    //Constructores
    Paciente();
    //Sobrecarga de condstuctores
    Paciente(string nombre,int edad);
    Paciente(string nombre, int edad, char genero, float altura, float masa);
    //Encapsulamiento
    bool getPositivo() const;
    void setPositivo(bool value);
    bool getAlta() const;
    void setAlta(bool value);
    int getId() const;
    string getNombre() const;
    //Metodos
    string getDatos();
    string obtenerIMC();
    string bool_to_string(bool valor);
    //Transforma un número decimal a string con precición
    template <typename T>
    string to_string_con_precision(const T a_value, const int valor = 6);
};

#endif // PACIENTE_H
