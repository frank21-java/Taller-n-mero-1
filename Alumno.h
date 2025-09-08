#pragma once
using namespace std;
class Alumno
{
private:
    string id,nombre,apellido,carrera;
    int ingreso;
    //agregar listas para cursos,notas
public:
    Alumno(string id,string nombre,string apellido,string carrera,int ingreso);
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

    virtual void toString();
};