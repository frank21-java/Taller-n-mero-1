#pragma once
#include <string> // Incluir la biblioteca string

using namespace std; // Ahora es seguro usarlo

class Alumno
{
private:
    string id, nombre, apellido, carrera,cursos;
    int ingreso,cantCursos;
    //agregar listas para cursos,notas
public:
    Alumno(string id, string nombre, string apellido, string carrera, int ingreso);
    ~Alumno();
    
    string getId();
    void setId(string id);
    string getNombre();
    void setNombre(string nombre);
    string getApellido();
    void setApellido(string apellido);
    string getCarrera();
    void setCarrera(string carrera);
    int getIngreso();
    void setIngreso(int ingreso);
    void getCursos();
    void agregarCurso(string idCurso);
    bool borrarCurso(string idCurso);
    int getContadorCurso();
    
    virtual void toString();
};