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
};