#include <iostream>
#include <vector>
#include "Paciente.hpp"
#include "Medico.hpp"
#include "CitaMedica.hpp"

using namespace std;

int main() {
  vector<Paciente> pacientes = { Paciente("Juan Perez", 1), Paciente("Maria Lopez", 2) };
  vector<Medico> medicos;
  vector<CitaMedica> citas;
  
