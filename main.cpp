#include "Alumno.h"
#include "Curso.h"

#include <iostream>
#include <limits> // Para limpiar el buffer
using namespace std;
void MenuAlumnos();
void MenuCursos();
void Inscripciones();
void mostrarMenu();

void CrearAlumnos();
void BuscarAlumnos();
void EliminarAlumnos();

void CrearCursos();
void BuscarCursos();
void EliminarCursos();

void InscribirAlumCurso();
void EliminarAlumCurso();

void agregarNotas();


int main()
{
    int opcion;
    int opAlumnos;
    int opCursos;
    int opInscrip;
    do
    {
        mostrarMenu();
        cin >> opcion;
        switch (opcion)
        {
        case 1 :
            do {
                MenuAlumnos();
                cin >> opAlumnos;
                switch (opAlumnos){
                    case 1:
                        CrearAlumnos();
                        break;
                    case 2:
                        BuscarAlumnos();
                        break;
                    case 3:
                        EliminarAlumnos();
                        break;
                    case 4:
                        break;
                    default:
                        cout << "Opción inválida" << endl;
                        break;
                }
            } while(opAlumnos != 4);
            break;
        case 2:
            do{
                MenuCursos();  
                cin >> opCursos;
                switch (opCursos){
                    case 1:
                        CrearCursos();
                        break;
                    case 2:
                        BuscarCursos();
                        break;
                    case 3:
                        EliminarCursos();
                        break;
                    case 4:
                        break;
                    default:
                        cout << "Opción inválida" << endl;
                        break;
                }
            } while (4 != opCursos);
            break;
        case 3: 
            do{
                Inscripciones();
                cin >> opInscrip;
                switch (opInscrip){
                    case 1:
                        InscribirAlumCurso();
                        break;
                    case 2:
                        EliminarAlumCurso();
                        break;
                    case 3:
                        break;
                    default:
                        cout << "Opción inválida" << endl;
                        break;
                }
            } while(3 != opInscrip);
            break;
        case 4: 
            agregarNotas();
            break;
        case 5: cout << "¡Hasta pronto!" << endl; break;
        default: cout << "Opción inválida" << endl;
        }
    } while (opcion != 5);

    return 0;
}

//------------------------------menus----------------------
void mostrarMenu() {
    system("clear");

    cout << "=== MENÚ DEL PROGRAMA ===" << endl;
    cout << "1. Manejo de Alumnos" << endl;
    cout << "2. Manejo de Cursos" << endl;
    cout << "3. Manejo de Inscripciones" << endl;
    cout << "4. Manejo de Notas" << endl;
    cout << "5. Salir" << endl;
    cout << "Selecciona: ";
}
void MenuAlumnos(){
    system("clear");

    cout << "=== MENÚ DE ALUMNOS ===" << endl;
    cout << "1. Agregar Alumnos" << endl;
    cout << "2. Buscar Alumnos" << endl;
    cout << "3. Eliminar Alumnos" << endl;
    cout << "4. Salir" << endl;
    cout << "Selecciona: ";
}
void MenuCursos(){
    system("clear");

    cout << "=== MENÚ DE CURSOS ===" << endl;
    cout << "1. Agregar Cursos" << endl;
    cout << "2. Buscar Cursos" << endl;
    cout << "3. Eliminar Cursos" << endl;
    cout << "4. Salir" << endl;
    cout << "Selecciona: ";
}
void Inscripciones(){
    system("clear");

    cout << "=== MENÚ DE INSCRIPCIONES ===" << endl;
    cout << "1. Inscribir un alumno en un curso" << endl;
    cout << "2. Eliminar un alumno de un curso" << endl;
    cout << "3. Salir" << endl;
    cout << "Selecciona: ";
}
//-----------------------Alumnos---------------------------
void CrearAlumnos(){
    bool salir = false;
    string nombre = "";
    while(nombre==""){
        cout<<"Ingresar nombre sin apellido del estudiante: \n0. Para cancelar"<<endl;
        cin >> nombre;
        if(nombre == "0"){salir = true;}
    }
    string apellido = "";
    if(salir==false){
        while(apellido==""){
            cout<<"Ingresar apellido del estudiante: \n0. Para cancelar"<<endl;
            cin>>apellido;
            if(apellido=="0"){salir=true;}
        }
    }
    string id = "";
    if(salir == false){
        while(id==""){
            cout<<"Ingresar id del estudiante: \n0. Cancelar"<<endl;
            cin>>id;
            if(id=="0"){salir=true;}
        }
    }
    string carrera ="";
    if(salir==false){
        while(carrera==""){
            cout<<"Ingresar carrera del estudiante: \0.Cancelar"<<endl;
            cin>>carrera;
            if(carrera=="0"){salir=true;}
        }
    }
    int ingreso = 9080;
    if(salir==false){
        string ingresoLetra="";
        while(ingreso==9080 || ingresoLetra==""){
            cout<<"Año de ingreso: \n0.Cancelar"<<endl;
            cin>>ingresoLetra;
            try{
                ingreso=stoi(ingresoLetra);
            }catch(const invalid_argument& e){
                cerr<<"No es numero"<<endl;
            }catch(const out_of_range& e){
                cerr<<"Fuera de rango para int"<<endl;
            }
        }
    }
    if(salir==false){
        Alumno alumno(id,nombre,apellido,carrera,ingreso);
        //agregar alumno a la lista
    }
    else{
        cout<<"Se cancelo la creacion del alumno"<<endl;
    }
}
void BuscarAlumnos(){}
void EliminarAlumnos(){}
//-----------------------Cursos----------------------------
void CrearCursos(){
    bool salir = false;
    string nombre = "";
    while(nombre==""){
        cout<<"Nombre del curso: \n0.Cancelar"<<endl;
        cin>>nombre;
        if(nombre=="0"){salir=true;}
    }
    string id = "";
    if(salir==false){
        while(id==""){
            cout<<"Ingresar id del curso: \n0.Salir"<<endl;
            cin>>id;
            if(id=="0"){salir=true;}
        }
    }
    string profesor= "";
    if(salir==false){
        while(profesor==""){
            cout<<"NOmbre del profesor: \n0Salir"<<endl;
            cin>>profesor;
            if(profesor=="0"){salir=true;}
        }
    }
    string carrera ="";
    if(salir==false){
        while(carrera==""){
            cout<<"Carrra del curso: \n0.Salir"<<endl;
            cin>>carrera;
            if(carrera=="0"){salir=true;}
        }
    }
    int cantidad=9080;
    if(salir==false){
        string cantSTR="";
        while(cantidad==9080 || cantSTR==""){
            cout<<"Año de ingreso: \n0.Cancelar"<<endl;
            cin>>cantSTR;
            try{
                cantidad=stoi(cantSTR);
            }catch(const invalid_argument& e){
                cerr<<"No es numero"<<endl;
            }catch(const out_of_range& e){
                cerr<<"Fuera de rango para int"<<endl;
            }
        }
    }
    if(salir==false){
        Curso curso(id,nombre,cantidad,carrera,profesor);
    }
    else{
        cout<<"Se cancelo la agregacion del curso"<<endl;
    }
}
void BuscarCursos(){}
void EliminarCursos(){}
//---------------------Inscripciones----------------------
void InscribirAlumCurso(){}
void EliminarAlumCurso(){}
//--------------------------Notas------------------------
void agregarNotas(){}