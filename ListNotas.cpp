#include "ListNotas.h"
#include <iostream>
using namespace std;

ListNotas::ListNotas() : cabeza(nullptr), cola(nullptr){}

ListNotas::~ListNotas(){
    NodoNota* actual = cabeza;
    while (actual != nullptr){
        NodoNota* temp = actual;
        actual = actual->siguiente;
        delete temp->nota;
        delete temp;
    }
}
    
void ListNotas::insertarFinal(Nota* nota){
    NodoNota* nuavaNota = new NodoNota(nota);
    if(cabeza == nullptr){
        cabeza = nuavaNota;
        cola = nuavaNota;
    } else {
        cola->siguiente = nuavaNota;
        cola = nuavaNota;
    }
}

void ListNotas::eliminarPorAlumno(string idAlumno){
    NodoNota* actual = cabeza;
    NodoNota* anterior = nullptr;
    
    while(actual != nullptr){
        if(actual->nota->getAlumno()->getId() == idAlumno){
            NodoNota* temp = actual;
            if (actual == nullptr){
                cabeza = actual->siguiente;
            } else {
                anterior->siguiente = anterior->siguiente;
            }
            
            if( actual == cola){
                cola = anterior;
            }
            
            actual = actual->siguiente;
            delete temp->nota;
            delete temp;
        } else {
            anterior = actual;
            actual = anterior->siguiente;
        }
    }
}

void ListNotas::eliminarPorCurso(string idCurso){
    NodoNota* actual = cabeza;
    NodoNota* anterior = nullptr;
    
    while(actual != nullptr){
        if(actual->nota->getCurso()->getId() == idCurso){
            NodoNota* temp = actual;
            if (actual == nullptr){
                cabeza = actual->siguiente;
            } else {
                anterior->siguiente = anterior->siguiente;
            }
            
            if( actual == cola){
                cola = anterior;
            }
            
            actual = actual->siguiente;
            delete temp->nota;
            delete temp;
        } else {
            anterior = actual;
            actual = anterior->siguiente;
        }
    }
}

bool ListNotas::existeNota(string idAlumno, string idCurso){
    NodoNota* actual = cabeza;
    while(actual != nullptr){
        if(actual->nota->getAlumno()->getId() == idAlumno && actual->nota->getCurso()->getId() == idCurso){
           return true;
        }
        actual = actual->siguiente;
    }
    return false;
}

void ListNotas::mostrarNotasAlumno(string idAlumno){
    NodoNota* actual = cabeza;
    cout << "------NOTAS DEL ALUMNO-------" << endl;
    
    bool tieneNota = false;
    while(actual != nullptr){
        if(actual->nota->getAlumno()->getId() == idAlumno){
           actual->nota->mostrarNota();
           tieneNota = true;
        }
        actual = actual->siguiente;
    }
    if(!tieneNota){
        cout << "El alumno no tiene notas registradas." << endl;
    }
}

void ListNotas::mostrarNotasCurso(string idCurso){
    NodoNota* actual = cabeza;
    cout << "------NOTAS DEL CURSO-------" << endl;
    
    bool tieneNota = false;
    while(actual != nullptr){
        if(actual->nota->getCurso()->getId() == idCurso){
           actual->nota->mostrarNota();
           tieneNota = true;
        }
        actual = actual->siguiente;
    }
    if(!tieneNota){
        cout << "El curso no tiene notas registradas." << endl;
    }
}

double ListNotas::calcularPromedioAlumno(string idAlumno){
    NodoNota* actual = cabeza;
    double suma = 0.0;
    int contador = 0;
    
    while(actual != nullptr){
        if(actual->nota->getCurso()->getId() == idAlumno){
            suma += actual->nota->getDato();
            contador++;
        }
        actual = actual->siguiente;
    }
    return contador > 0 ? suma / contador : 0.0;
}

double ListNotas::calcularPromedioAlumnoCurso(string idAlumno, string idCurso){
    NodoNota* actual = cabeza;
    double suma = 0.0;
    int contador = 0;
    
    while(actual != nullptr){
        if(actual->nota->getAlumno()->getId() == idAlumno && actual->nota->getCurso()->getId() == idCurso){
            suma += actual->nota->getDato();
            contador++;
        }
        actual = actual->siguiente;
    }
    return contador > 0 ? suma / contador : 0.0;
}

void ListNotas::mostrarTodas(){
    NodoNota* actual = cabeza;
    cout << "------TODAS LAS NOTAS-------" << endl;
    if(cabeza == nullptr){
        cout << "No hay notas registradas en el sistema"<< endl;
        return;
    }
    while(actual != nullptr){
        actual->nota->mostrarNota();
        actual = actual->siguiente;
    }
}