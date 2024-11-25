#include <iostream>
#include <vector>
#include "Paciente.hpp"
#include "Medico.hpp"
#include "CitaMedica.hpp"

using namespace std;

int main() {
  vector<Paciente> pacientes = { Paciente("Juan Perez", 1), Paciente("Maria Lopez", 2) };
  vector<Medico> medicos = { Medico("Dr. Gomez", "Cardiología"), Medico("Dra. Torres", "Pediatría") };
  vector<CitaMedica> citas = { CitaMedica(1, "2024-11-20") };
  
pacientes = { Paciente("Juan Perez", 1), Paciente("Maria Lopez", 2) };
medicos = { Medico("Dr. Gomez", "Cardiología"), Medico("Dra. Torres", "Pediatría") };
citas = { CitaMedica(1, "2024-11-20") };

