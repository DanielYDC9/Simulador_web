#ifndef PACIENTE_HPP
#define PACIENTE_HPP

#include <string>

class Paciente {
private:
    std::string nombre;
    int id;
    std::string historial_clinico;
public:
    Paciente(std::string nombre, int id);
    void registrar_paciente();
    void eliminar_paciente();
    void modificar_paciente();
    void mostrar_paciente();

};

#endif
