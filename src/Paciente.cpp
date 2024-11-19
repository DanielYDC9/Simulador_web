#include "Paciente.hpp"
#include <iostream>

Paciente::Paciente(std::string nombre, int id) : nombre(nombre), id(id) {}

void Paciente::registrar_paciente() {
    std::cout << "Paciente registrado: " << nombre << std::endl;
}

void Paciente::eliminar_paciente() {
    std::cout << "Paciente eliminado: " << nombre << std::endl;
}
