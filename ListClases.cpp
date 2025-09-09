#include "ListClases.h"
#include <iostream>
using namespace std;

ListClases::ListClases() : cabeza(nullptr),cola(nullptr){}
    
ListClases::~ListClases() {
    NodoClase* actual = cabeza;
    while(actual != nullptr){
        NodoClase* temp = actual;
        actual = actual->siguiente;
        delete temp->siguiente;
        delete temp;
    }
}
    
void ListClases::insertarFinal(Curso* curso){
    NodoClase* nuevaClase = new NodoClase(curso);
    if (cabeza == nullptr){
        cabeza = nuevaClase;
        cola = nuevaClase;
    } else{
        cola->siguiente = nuevaClase;
        cola = nuevaClase;
    }
}
void ListClases::eliminarPorId(string id){
    if ( cabeza == nullptr){
        return;
    }
    if (cabeza->curso->getId() == id){
        NodoClase* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp->curso;
        delete temp;
        if (cabeza == nullptr){
            cola == nullptr;
        }
        return;
    }
    NodoClase* actual = cabeza;
    while(actual->siguiente != nullptr){
        if(actual->siguiente->curso->getId() ==id){
            NodoClase* temp = actual->siguiente;
            actual->siguiente = temp->siguiente;
            if(temp == cola){
                cola = actual;
            }
            delete temp->curso;
            delete temp;
            return;
        }
    actual = actual->siguiente;
    }
}
void ListClases::mostrar(){
    NodoClase* actual = cabeza;
    cout << "-----LISTA DE CURSOS------"<<endl;
    while(actual != nullptr){
        cout << "ID: "<<actual->siguiente->getId<<endl;
        cout << ", Nomnbre: "<<actual->siguiente->getNombre<<endl;
        cout << ", Cupos: "<<actual->siguiente->getCantMax<<endl;
        cout << ", Carrera: "<<actual->siguiente->getCarrera<<endl;
        cout << ", Profesor: "<<actual->siguiente->getProfesor<<endl;
        actual = actual->siguiente
    }
    cout <<"----------------------"<<endl;
}
bool ListClases::buscarPorId(string id){
    NodoClase* actual = cabeza;
    while (actual != nullptr){
        if (actual->curso->getId() == id){
            return true;
            }
        actual = actual->siguiente;
        }
    return false;
}
    
Curso* ListClases::obtenerPorId(string id){
    NodoClase* actual = cabeza;
    while( actual != nullptr){
        if(actual->Curso->getId() == id){
            return actual->curso;
        }
        actual = actual->siguiente;
    }
    return nullptr;
}
