#pragma once
#include <string>
using namespace std;
class Curso
{
private:
    string id,nombre,carrera,profesor;
    int cantMax;
    //agregar lista de alumnos
public:
    Curso(string id,string nombre,int cantMax,string carrera,string profesor);
    ~Curso();

    string getId();
    void setId(string id);
    string getNombre();
    void setNombre(string nombre);
    int getCantMax();
    void setCantMax(int cantMax);
    string getCarrera();
    void setCarrera(string carrera);
    string getProfesor();
    void setProfesor(string profesor);

    virtual void toString();
};