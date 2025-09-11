#include "Alumno.h"
#include "Curso.h"
#include "ListAlumnos.h"
#include "ListClases.h"
#include "ListNotas.h"
#include <iostream>
#include <limits>
using namespace std;

int contadorAlumnos=0;

ListAlumnos ListaDeAlumnos;
ListClases ListaDeCursos;
ListNotas ListaDeNotas;


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

void ConsuAndReport();

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
        case 5:
            ConsuAndReport();
            break;
        case 6: cout << "¡Hasta pronto!" << endl; break;
        
        default: cout << "Opción inválida" << endl;
        }
    } while (opcion != 6);

    return 0;
}

//------------------------------menus----------------------
void mostrarMenu() {
    system("cls");

    cout << "=== MENÚ DEL PROGRAMA ===" << endl;
    cout << "1. Manejo de Alumnos" << endl;
    cout << "2. Manejo de Cursos" << endl;
    cout << "3. Manejo de Inscripciones" << endl;
    cout << "4. Manejo de Notas" << endl;
    cout << "5. Consultas y Reportes: " << endl;
    cout << "6. Salir" << endl;
    cout << "Selecciona: ";
}
void MenuAlumnos(){
    system("cls");

    cout << "=== MENÚ DE ALUMNOS ===" << endl;
    cout << "1. Agregar Alumnos" << endl;
    cout << "2. Buscar Alumnos" << endl;
    cout << "3. Eliminar Alumnos" << endl;
    cout << "4. Salir" << endl;
    cout << "Selecciona: ";
}
void MenuCursos(){
    system("cls");

    cout << "=== MENÚ DE CURSOS ===" << endl;
    cout << "1. Agregar Cursos" << endl;
    cout << "2. Buscar Cursos" << endl;
    cout << "3. Eliminar Cursos" << endl;
    cout << "4. Salir" << endl;
    cout << "Selecciona: ";
}
void Inscripciones(){
    system("cls");

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
        cout<<"Ingresar nombre sin apellido del estudiante: "<<endl;
        cout<<"0. Cancelar"<<endl;
        cin >> nombre;
        if(nombre == "0"){salir = true;}
    }
    string apellido = "";
    if(salir==false){
        while(apellido==""){
            cout<<"Ingresar apellido del estudiante: "<<endl;
            cout<<"0. Cancelar"<<endl;
            cin>>apellido;
            if(apellido=="0"){salir=true;}
        }
    }
    string id = "";
    if(salir == false){
        while(id==""){
            cout<<"Ingresar id del estudiante: "<<endl;
            cout<<"0. Cancelar"<<endl;
            cin>>id;
            if(id=="0"){
                salir=true;
            } else if(id != "0") {
                if(ListaDeAlumnos.buscarPorID(id)){
                    id = "";
                    cout<<"el id ya pertenece a un Alumno"<<endl;
                }
            }
        }
    }
    string carrera ="";
    if(salir==false){
        while(carrera==""){
            cout<<"Ingresar carrera del estudiante: "<<endl;
            cout<<"0. Cancelar"<<endl;
            cin>>carrera;
            if(carrera=="0"){salir=true;}
        }
    }
    int ingreso = 9080;
    if(salir==false){
        string ingresoLetra="";
        while(ingreso==9080 || ingresoLetra==""){
            cout<<"Año de ingreso: "<<endl;
            cout<<"0. Cancelar"<<endl;
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
        Alumno* alumno = new Alumno(id,nombre,apellido,carrera,ingreso);
        ListaDeAlumnos.insertarFinal(alumno);
        contadorAlumnos++;
        cout<<"Se a agregado al alumno con exito =)"<< endl;
    }
    else{
        cout<<"Se cancelo la creacion del alumno"<<endl;
    }
    system("pause");
}
void BuscarAlumnos(){
    string buscar;
    cout <<"ingrese el Id del alumno: "<<endl;
    cin >> buscar;
    Alumno* alumno = ListaDeAlumnos.obtenerPorId(buscar);
    if (alumno != nullptr){
        cout <<"ID: " << alumno->getId() << endl;
        cout <<"Nombre: : " << alumno->getNombre() <<" " << alumno->getApellido() << endl;
        cout <<"Carrera: " << alumno->getCarrera() << endl;
        cout <<"Ingreso: " << alumno->getIngreso() << endl;
    } else {
        cout << "El alumno no exite"<<endl;
    }
}
void EliminarAlumnos(){
    string buscar;
    cout <<"ingrese el ID del alumno quie quiere eliminar: "<< endl;
    cin >> buscar;
    if(ListaDeAlumnos.buscarPorID(buscar)){
        ListaDeNotas.eliminarPorAlumno(buscar);
        ListaDeAlumnos.eliminarID(buscar);
        cout<<"el alumno a sido eliminado con exito"<<endl;
    } else{
        cout<<"el alumno no existe"<<endl;
    }
    system("pause");
}
//-----------------------Cursos----------------------------
void CrearCursos(){
    bool salir = false;
    string nombre = "";
    while(nombre==""){
        cout<<"Nombre del curso: "<<endl;
        cout<<"0. Cancelar"<<endl;
        cin>>nombre;
        if(nombre=="0"){salir=true;}
    }
    string id = "";
    if(salir==false){
        while(id==""){
            cout<<"Ingresar id del curso: "<<endl;
            cout<<"0. Cancelar"<<endl;
            cin>>id;
            if(id=="0"){
                salir=true;
            } else if(id != "0") {
                if(ListaDeCursos.obtenerPorId(id)){
                    id = "";
                    cout<<"el id ya pertenece a un Curso"<<endl;
                }
            }
        }
    }
    string profesor= "";
    if(salir==false){
        while(profesor==""){
            cout<<"NOmbre del profesor: "<<endl;
            cout<<"0. Cancelar"<<endl;
            cin>>profesor;
            if(profesor=="0"){salir=true;}
        }
    }
    string carrera ="";
    if(salir==false){
        while(carrera==""){
            cout<<"Carrra del curso: "<<endl;
            cout<<"0. Cancelar"<<endl;
            cin>>carrera;
            if(carrera=="0"){salir=true;}
        }
    }
    int cantidad=9080;
    if(salir==false){
        string cantSTR="";
        while(cantidad==9080 || cantSTR==""){
            cout<<"Año de ingreso: "<<endl;
            cout<<"0. Cancelar"<<endl;
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
        Curso* curso = new Curso(id,nombre,cantidad,carrera,profesor);
        ListaDeCursos.insertarFinal(curso);
        cout <<"Se a creado el curso"<< endl;
    }
    else{
        cout<<"Se cancelo la agregacion del curso"<<endl;
    }
    system("pause");
}
void BuscarCursos(){
    string buscar;
    cout <<"ingrese el Id del Curso: "<<endl;
    cin >> buscar;
    Curso* curso = ListaDeCursos.obtenerPorId(buscar);
    if (curso != nullptr){
        cout << "ID: "<< curso->getId() <<endl;
        cout << "Nomnbre: "<<curso->getNombre()<<endl;
        cout << "Cupos: "<<curso->getCantMax()<<endl;
        cout << "Carrera: "<<curso->getCarrera()<<endl;
        cout << "Profesor: "<<curso->getProfesor()<<endl;
    } else {
        cout << "El alumno no exite"<<endl;
    }
}
void EliminarCursos(){
    string id;
    cout << "Ingrese el Id curso que quiere eliminar: "<< endl;
    cin >> id;
    if(ListaDeCursos.buscarPorId(id)){
        ListaDeNotas.eliminarPorCurso(id);
        ListaDeCursos.eliminarPorId(id);
        cout<< "el curso se elimino"<<endl;
    } else{
        cout<<"el curso no existe"<<endl;
    }
}
//---------------------Inscripciones----------------------
void InscribirAlumCurso(){}
void EliminarAlumCurso(){}
//--------------------------Notas------------------------
void agregarNotas(){
    system("cls");
    cout << "-------------AGREGAR NOTAS-------------" << endl;
    string idAlumno;
    string idCurso;
    double notaValor;
    cout << "Ingrese ID del alumno: "<<endl;
    cin >> idAlumno;
    
    Alumno* alumno = ListaDeAlumnos.obtenerPorId(idAlumno);
    if (alumno == nullptr){
        cout<< "El alumno no existe"<<endl;
        system("pause");
        return;
    }
    cout << "Ingrese ID del curos: "<<endl;
    cin >> idCurso;
    Curso* curso = ListaDeCursos.obtenerPorId(idAlumno);
    if (curso == nullptr){
        cout<< "El curso no existe"<<endl;
        system("pause");
        return;
    }
    if(alumno->getCarrera() != curso->getCarrera()){
        cout << "Error: El alumno no pertenece a ese curso"<< endl;
        system("pause");
        return;
    }
    cout << "Ingrese la nota (1.0 - 7.0): "<<endl;
    cin >> notaValor;
    
    if(notaValor < 1.0 || notaValor > 7.0){
        cout << "nota invalida" << endl;
        system("pause");
        return;
    }
    Nota* nuevaNota = new Nota(alumno, curso, notaValor);
    ListaDeNotas.insertarFinal(nuevaNota);
    
    cout << "Nota agregada exitosamente!" << endl;
    system("pause");
    
}
//------------------------Consultas y Reportes-------------
void ConsuAndReport(){
    cout<<"1. Obtener alumnos de una carrera\n"
    <<"2. Obtener los cursos de un alumno\n"
    <<"3. Promedio de un alumno en un curso"
    <<"4. Promedio general de un alumno"
    <<"5. Salir"
    <<endl;

    int resp;
    do{
        cin>>resp;
        switch(resp){
            case 1:
            obtenerCarrera();
            break;
            case 2:
            obtenerCursos();
            break;
            case 3:
            obtenerPromedio();
            break;
            case 4:
            promedioGeneral();
            break;
            case 5:
            cout<<"Saliendo"<<endl;
            break;
            default:
            cout<<"opcion incorrecta"<<endl;
        }
    }while(resp!=5);
}

void obtenerCarrera(){
    cout<<"Ingrese carrera a buscar"<<endl;
    string carrera;
    cin>>carrera;
    int contadorCarrera =0;
    for(int i=0;i<contadorAlumnos;i++){
        Alumno* alumno = ListaDeAlumnos.obtenerPorCarrera(carrera);
        if(alumno!=nullptr){
            cout<<alumno<<endl;
            contadorCarrera++;
        }
    }
    if(contadorCarrera==0){
        cout<<"La carrera no tiene alumnos"<<endl;
    }
}

void obtenerCursos(){
    cout<<"Id del curso a buscar"<<endl;
    string curso;
    cin>>curso;
    int contadorCurso=0;
    for(int i=0;i<contadorAlumnos;i++){
        Alumno* alumno;
        //alumno = ListaDeAlumnos.obtenerPorCurso(curso);
        if(alumno!=nullptr){
            cout<<alumno<<endl;
            contadorCurso++;
        }
    }

    if(contadorCurso==0){
        cout<<"el curso no tiene alumnos"<<endl;
    }
}

void obtenerPromedio(){
    cout<<"Ingrese id del alumno"<<endl;
    string idAlumno;
    cin>>idAlumno;
    cout<<"Ingrese id del curso"<<endl;
    string idCurso;
    cin>>idCurso;
    ListaDeNotas.calcularPromedioAlumnoCurso(idAlumno,idCurso);
}

void promedioGeneral(){
    cout<<"INgresar id del alumno"<<endl;
    string id;
    cin>>id;
    ListaDeNotas.calcularPromedioAlumno(id);
}