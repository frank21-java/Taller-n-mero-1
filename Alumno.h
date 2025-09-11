#pragma once
#include <string> // Incluir la biblioteca string

using namespace std; // Ahora es seguro usarlo

class Alumno
{
private:
    string id, nombre, apellido, carrera,cursos;
    int ingreso,cantCursos;
public:
    Alumno(string id, string nombre, string apellido, string carrera, int ingreso);
    ~Alumno();
    
    /**
     * devuelve el id del alumno
     */
    string getId();

    /**
     * establece el id en caso de cambiarse
     * id- el id al que se cambia
     * 
     */
    void setId(string id);

    /**
     * devuelve el nombre del alumno
     */
    string getNombre();

    /**
     * cambia el nombre del alumno
     * nombre- el nuevo nombre que va a tener
     */
    void setNombre(string nombre);

    /**
     * devuelve el apellido del alumno
     */
    string getApellido();

    /**
     * cambia el apellido del alumno
     * apellido- nuevo apellido para el alumno
     */
    void setApellido(string apellido);

    /**
     * devuelve la carrera a la que pertenece el alumno
     */
    string getCarrera();

    /**
     * establece la carrera por si se cambia
     * carrera- nueva carrera del alumno
     */
    void setCarrera(string carrera);

    /**
     * devuelve el año de ingreso del alumno
     */
    int getIngreso();

    /**
     * establece el año de ingreso en caso de cambiar
     * ingreso- el nuevo año en que entro
     */
    void setIngreso(int ingreso);

    /**
     * imprime el id de los cursos a los que pertenece
     */
    void getCursos();

    /**
     * agrega una nueva id de curso al string de los cursos, se separan por ","
     * idCurso- la id del curso a agregar
     */
    void agregarCurso(string idCurso);

    /**
     * borra el curso de la "lista", devuelve true si se borra, devuelve false si no
     * idCurso- el id del curso que se borra
     */
    bool borrarCurso(string idCurso);

    /**
     * devuelve la cantidad de cursos en la que esta el alumno
     */
    int getContadorCurso();
    
    /**
     * imprime al alumno
     */
    virtual void toString();
};