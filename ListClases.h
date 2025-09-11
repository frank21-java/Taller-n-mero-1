#pragma once
#ifndef LISTCLASES_H
#define LISTCLASES_H
#include "Curso.h"

struct NodoClase {
    Curso* curso;
    NodoClase* siguiente;
    NodoClase(Curso* cur) : curso(cur), siguiente(nullptr){}
};
class ListClases {
private:
    NodoClase* cabeza;
    NodoClase* cola;
public:
    ListClases();
    ~ListClases();
    
    /**
     * agrega un curso al final de la lista
     * curso- la clase que se quiere agregar
     */
    void insertarFinal(Curso* curso);

    /**
     * borra un curso de la lista segun su id
     * id- id de la clase a borrar
     */
    void eliminarPorId(string id);

    /**
     * imprime los datos del curso
     */
    void mostrar();

    /**
     * revisa si existe una clase con ese id, true si, false no
     * id- id de la clase a revisar
     */
    bool buscarPorId(string id);

    /**
     * devuelve una clase que se busca por su id
     * id- id de la clase a buscar
     */
    Curso* obtenerPorId(string id);
};

#endif
