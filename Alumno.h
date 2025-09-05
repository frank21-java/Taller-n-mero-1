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
};