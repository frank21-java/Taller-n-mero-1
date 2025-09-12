#include "Alumno.h"
#include "Curso.h"
#include "ListAlumnos.h"
#include "ListClases.h"
#include "ListNotas.h"
#include <iostream>
#include <limits>
using namespace std;

ListAlumnos ListaDeAlumnos;
ListClases ListaDeCursos;
ListNotas ListaDeNotas;


/*muesta las opciones para el menu de alumnos*/
void MenuAlumnos();
/*muestra las opciones para el menu de cursos*/
void MenuCursos();
/*muestra las opciones para el menu de inscripciones*/
void Inscripciones();
/*muestra el menu principal*/
void mostrarMenu();

/*crea un alumno pidiendo todos sus datos*/
void CrearAlumnos();
/*busca un alumno segun su id*/
void BuscarAlumnos();
/*se elimina un alumno segun su id*/
void EliminarAlumnos();

/*crea un curso pidiendo todos sus datos*/
void CrearCursos();
/*busca un curso segun su id*/
void BuscarCursos();
/*elimina un curso segun su id*/
void EliminarCursos();

/*inscribe un alumno a una clase*/
void InscribirAlumCurso();
/*elimina un alumno de una clase*/
void EliminarAlumCurso();

/*asigna notas a un alumno*/
void agregarNotas();

/*menu de consultas y reportes*/
void ConsuAndReport();
/*muestra los alumnos de una carrera*/
void obtenerCarrera();
/*muestra los cursos a los que pertenece un alumno*/
void obtenerCursos();
/*muestra el promedio de un curso para un alumno*/
void obtenerPromedio();
/*muestra el promedio general de un alumno*/
void promedioGeneral();


int main()
{
    int opcion;
    int opAlumnos;
    int opCursos;
    int opInscrip;
    int opReport;
    do{
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
            do{
                ConsuAndReport();
                cin >> opReport;
                switch (opReport){
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
                        break;
                    default:
                        cout << "Opción inválida" << endl;
                        break;
                }
            } while(5 != opReport);
            break;
        case 6: 
            cout << "¡Hasta pronto!" << endl; 
            break;
        default: 
            cout << "Opción inválida" << endl;
        }
    } while (6 != opcion);
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
void ConsuAndReport(){
    system("cls");
    cout<<"1. Obtener alumnos de una carrera"<<endl;
    cout<<"2. Obtener los cursos de un alumno"<<endl;
    cout<<"3. Promedio de un alumno en un curso"<<endl;
    cout<<"4. Promedio general de un alumno"<<endl;
    cout<<"5. Salir"<<endl;
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
void InscribirAlumCurso(){
    cout<<"ingrese id del alumno"<<endl;
    string idAlumno;
    cin>>idAlumno;
    Alumno* alumno= ListaDeAlumnos.obtenerPorId(idAlumno);
    if(alumno==nullptr){
        cout<<"no se encontro al alumno"<<endl;
    }
    else{
        cout<<"ingresar id del curso"<<endl;
        string idCurso;
        cin>>idCurso;
        Curso* clase= ListaDeCursos.obtenerPorId(idCurso);
        if(clase==nullptr){
            cout<<"no se encontro la clase"<<endl;
        }
        else{
            if(alumno->getCarrera() == clase->getCarrera()){
            alumno->agregarCurso(idCurso);
            cout<<"se agrego el curso al alumno"<<endl;
            }
            else{
                cout<<"no son de la misma carrera"<<endl;
            }
        }
    }
}
void EliminarAlumCurso(){
    cout<<"ingrese id del alumno"<<endl;
    string idAlumno;
    cin>>idAlumno;
    Alumno* alumno= ListaDeAlumnos.obtenerPorId(idAlumno);
    if(alumno==nullptr){
        cout<<"no se encontro al alumno"<<endl;
    }
    else{
        cout<<"ingresar id del curso"<<endl;
        string idCurso;
        cin>>idCurso;
        Curso* clase= ListaDeCursos.obtenerPorId(idCurso);
        if(clase==nullptr){
            cout<<"no se encontro la clase"<<endl;
        }
        else{
            if(alumno->borrarCurso(idCurso)==true){
            cout<<"se elimino el alumno del curso"<<endl;
            }
            else{
                cout<<"ese alumno no estaba en la clase"<<endl;
            }
        }
    }
}
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
    Curso* curso = ListaDeCursos.obtenerPorId(idCurso);
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
void obtenerCarrera(){
   cout <<"Ingrese carrera que quiere revisar:";
   string carrera;
   cin >> carrera;
   ListaDeAlumnos.mostrarPorCarrera(carrera);
}

void obtenerCursos(){
    system("cls");
    cout << "Ingrese el ID del alumno: ";
    string idAlumno;
    cin >> idAlumno;
    Alumno* alumno = ListaDeAlumnos.obtenerPorId(idAlumno);
    if(alumno != nullptr){
        cout << "----- CURSOS INSCRITOS -----" << endl;
        alumno->getCursos(ListaDeCursos);
    } else{
        cout << "No se encontro el alumno" << endl;
    }
}

void obtenerPromedio(){
    cout<<"Ingrese id del alumno"<<endl;
    string idAlumno;
    cin>>idAlumno;
    cout<<"Ingrese id del curso"<<endl;
    string idCurso;
    cin>>idCurso;
    double promedio = ListaDeNotas.calcularPromedioAlumnoCurso(idAlumno,idCurso);
    cout<< "Promedio: "<<promedio<<endl;
}

void promedioGeneral(){
    cout<<"Ingresar id del alumno"<<endl;
    string id;
    cin>>id;
    double promedio = ListaDeNotas.calcularPromedioAlumno(id);
    cout<< "Promedio General: "<<promedio<<endl;
}