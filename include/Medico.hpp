#ifndef MEDICO_HPP
#define MEDICO_HPP

#include <iostream>
#include <string>
using namespace std;

class Medico {
private:
  string nombre;
  string especialidad;
public:
    Medico(string nombre, string especialidad);
    void mostrarMedico();
    string getNombre();
    string getEspecialidad();
};

#endif
