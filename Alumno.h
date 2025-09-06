#pragma once
using namespace std;
class Alumno
{
private:
    string id,nombre,apellido,carrera,ingreso;
    //agregar listas para cursos,notas
public:
    Alumno(string id,string nombre,string apellido,string carrera,string ingreso);
    ~Alumno();
    
    string getId();
    void setId(string id);
    string getNombre();
    void setNombre(string nombre);
    string getApellido();
    void setApellido(string apellido);
    string getCarrera();
    void setCarrera(string carrera);
    string getIngreso();
    void setIngreso(string ingreso);

    virtual void toString();
};