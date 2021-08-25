#include "paciente.h"

bool Paciente::getPositivo() const
{
    return this->positivo;
}

void Paciente::setPositivo(bool value)
{
    this->positivo = value;
}

string Paciente::getDatos()
{
    return "ID: " + to_string(this->id) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Edad: " + to_string(this->edad) + "\n" +
            "Genero: " + this->obtenerGenero() + "\n" +
            "Altura: " + to_string_con_precision(this->altura,2) + " m\n" +
            "Masa: " + to_string_con_precision(this->masa,2) + " kg\n" +
            "IMC: " + this->obtenerIMC() + "\n" +
            "Esta dado de alta: " + this->estaDadoDeAlta() + "\n" +
            "Tiene Covid-19: " + this->estaContagiado() + "\n\n";
}

string Paciente::obtenerIMC()
{
    float imc = this->masa / (this->altura * this->altura);
        string respuesta = "(" + to_string_con_precision(imc) + ")";
        if (imc <= 18.5){
            respuesta = "Anemia " + respuesta;
        }else if (imc <= 24.9){
            respuesta = "Normal " + respuesta;
        }else if (imc <= 29.9){
            respuesta = "Sobrepeso " + respuesta;
        }else{
            respuesta = "Obesidad " + respuesta;
        }
        return respuesta;
}

string Paciente::bool_to_string(bool valor)
{
    return valor ? "Si" : "No";
}

bool Paciente::getAlta() const
{
    return alta;
}

void Paciente::setAlta(bool value)
{
    alta = value;
}

int Paciente::getId() const
{
    return id;
}

string Paciente::getNombre() const
{
    return nombre;
}

string Paciente::obtenerGenero()
{
    return this->genero == 'M' ? "Masculino" : "Femenino";
}

string Paciente::estaContagiado()
{
    return bool_to_string(this->positivo);
}

string Paciente::estaDadoDeAlta()
{
    return bool_to_string(this->alta);
}

Paciente::Paciente()
{
    this->nombre = "";
    this->edad = 0;
    this->positivo = false;
    this->genero = ' ';
    this->altura = 0;
    this->masa = 0;
    this->alta = false;
}

Paciente::Paciente(string nombre, int edad)
{
    this->nombre =nombre;
    this->edad = edad;
    this->positivo = false;
    //Contador que permite llevar la cuenta de los pacientes ingresados
    Paciente::totalPacientes++;
    this->id=Paciente::totalPacientes;
    this->genero = ' ';
    this->altura = 0;
    this->masa = 0;
    this->alta = false;
}

Paciente::Paciente(string nombre, int edad, char genero, float altura, float masa)
{
    this->nombre =nombre;
    this->edad = edad;
    this->positivo = false;
    //Contador que permite llevar la cuenta de los pacientes ingresados
    Paciente::totalPacientes++;
    this->id=Paciente::totalPacientes;
    this->genero =genero;
    this->altura =altura;
    this->masa =masa;
    this->alta = false;
}

template<typename T>
string Paciente::to_string_con_precision(const T a_value, const int valor)
{
    ostringstream out;
    out.precision(valor);
    out << fixed << a_value;
    return out.str();

}
