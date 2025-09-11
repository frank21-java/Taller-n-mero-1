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

    /**
     * devuelve el id del curso
     */
    string getId();

    /**
     * cambia el id del curso
     * id- nuevo id para el curso
     */
    void setId(string id);

    /**
     * devuelve el nombre del curso
     */
    string getNombre();

    /**
     * cambia el nombre del curso
     * nombre- nuevo nombre para el curso
     */
    void setNombre(string nombre);

    /**
     * devuelve la cantidad maxima de alumnos del curso
     */
    int getCantMax();

    /**
     * cambia la cantidad maxima de alumnos
     */
    void setCantMax(int cantMax);

    /**
     * devuelve la carrera a la que pertenece el curso
     */
    string getCarrera();

    /**
     * cambia la carrera del curso
     * carrera- nueva carrera del curso
     */
    void setCarrera(string carrera);

    /**
     * devuelve el profesor que imparte el curso
     */
    string getProfesor();

    /**
     * cambia al profesor
     * profesor- nuevo profesor de la clase
     */
    void setProfesor(string profesor);

    /**
     * imprime la clase
     */
    virtual void toString();
};