#ifndef LISTAALUMNOS_H
#define LISTAALUMNOS_H
#include "Alumno.h"

struct NodoAlum {
    Alumno* alumno;
    NodoAlum* siguiente;
    NodoAlum(Alumno* alum) : alumno(alum),siguiente(nullptr){}
}
class ListAlumnos{
private:
    NodoAlum* cabeza;
    NodoAlum* cola;

public:
    ListAlumnos();
    ~ListAlumnos();
    
    void insertarFinal(int valor)
    void eliminarID()
    void mostrar();
    bool buscarPorID(int valor);
    Alumno* obtenerPorId(string id);
};

#endif