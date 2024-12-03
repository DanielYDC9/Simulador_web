#include "Medico.hpp"

Medico::Medico(string nombre, string especialidad) : nombre(nombre), especialidad(especialidad) {}

void Medico::mostrarMedico() {
    cout << "Médico: " << nombre << ", Especialidad: " << especialidad << endl;
}

string Medico::getNombre() {
    return nombre;
}

string Medico::getEspecialidad() {
    return especialidad;
}
