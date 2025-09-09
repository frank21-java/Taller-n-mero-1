#include "ListAlumnos.h"
#include <iostream>
using namespace std;

ListAlumnos:: ListAlumnos() : cabeza(nullptr), cola(nullptr) {}

ListAlumnos::~ListAlumnos(){
    NodoAlum* actual = cabeza;
    while (actual != nullptr) {
        NodoAlum* temp = actual;
        actual = actual -> siguiente;
        delete temp->alumno;
        delete temp;
    }
}
void ListAlumnos::insertarFinal(Alumno* alumno){
    NodoAlum* nuevoAlumno = new NodoAlum(alumno);
    if(cabeza == nullptr){
        cabeza = nuevoAlumno;
        cola = nuevoAlumno;
    } else {
        cola->siguiente = nuevoAlumno;
        cola = nuevoAlumno;
    }
}
void ListAlumnos::eliminarID(string id){
    if(cabeza == nullptr){
        return;
    }
    if(cabeza->alumno->getId() == id){
        NodoAlum*temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp->alumno;
        delete temp;
        if(cabeza == nullptr){
            cola = nullptr;
        }
        return;
    }
    NodoAlum* actual = cabeza;
    while (actual->siguiente != nullptr){
        if (actual->siguiente->alumno->getId() == id){
            NodoAlum* temp = actual->siguiente;
            actual->siguiente = temp->siguiente;
            if (temp == cola){
                cola = actual;
            }
            delete temp->alumno;
            delete temp;
            return;
        }
        actual = actual->siguiente;
    }
}

void ListAlumnos::mostrar(){
    NodoAlum* actual = cabeza;
    cout <<"-----LISTA DE ALUMNOS------" << endl;
    while (actual != nullptr){
        cout <<"ID: " << actual->alumno->getId() << endl;
        cout <<", Nombre: : " << actual->alumno->getNombre() <<" " << actual->alumno->getApellido() << endl;
        cout <<", Carrera: " << actual->alumno->getCarrera() << endl;
        cout <<", Ingreso: " << actual->alumno->getIngreso() << endl;
    }
    cout << "-------------------------------" << endl;
}   
bool ListAlumnos::buscarPorID(string id){
    NodoAlum* actual = cabeza;
    while (actual != nullptr){
        if (actual != nullptr){
            if (actual->alumno->getId() == id){
                return true;
            }
            actual = actual->siguiente;
        }
    }
    return false;
}   
Alumno* ListAlumnos::obtenerPorId(string id){
    NodoAlum* actual = cabeza;
    while (actual != nullptr){
        if (actual != nullptr){
            if (actual->alumno->getId() == id){
                return actual->alumno;
            }
            actual = actual->siguiente;
        }
    }
    return nullptr;
}