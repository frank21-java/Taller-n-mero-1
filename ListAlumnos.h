#pragma once
#ifndef LISTAALUMNOS_H
#define LISTAALUMNOS_H
#include "Alumno.h"

struct NodoAlum {
    Alumno* alumno;
    NodoAlum* siguiente;
    NodoAlum(Alumno* alum) : alumno(alum),siguiente(nullptr){}
};
class ListAlumnos{
private:
    NodoAlum* cabeza;
    NodoAlum* cola;

public:
    ListAlumnos();
    ~ListAlumnos();
    
    /**
     * inserta un alumno al final de la lista
     * alumno- direccion del alumno que se agrega
     */
    void insertarFinal(Alumno* alumno);

    /**
     * elimina un alumno de la lista segun su id
     * id- id del alumno a eliminar
     */
    void eliminarID(string id);

    /**
     * imprime por pantalla los datos del alumno
     */
    void mostrar();

    /**
     * busca si existe ese id en la lista, true si existe false si no
     * id- id del alumno que se busca
     */
    bool buscarPorID(string id);

    /**
     * devuelve el alumno que se pide
     * id- id del alumno que se buscaba
     */
    Alumno* obtenerPorId(string id);

    /**
     * busca si existen alumnos en una carrera
     * carrera- lo que se busca si tiene alumnos
     */
    bool buscarPorCarrera(string carrera);

    /**
     * devuelve alumno de la carrera indicada
     * carrera- buscar alumno de aqui
     */
    Alumno* obtenerPorCarrera(string carrera);
    
    /**
     * muestra todos los alumnos que pertenece a una carrera
     */
    void mostrarPorCarrera(string carrera);//falta instanciar
};

#endif