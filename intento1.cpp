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
void CrearAlumnos(){}
void BuscarAlumnos(){}
void EliminarAlumnos(){}
//-----------------------Cursos----------------------------
void CrearCursos(){}
void BuscarCursos(){}
void EliminarCursos(){}
//---------------------Inscripciones----------------------
void InscribirAlumCurso(){}
void EliminarAlumCurso(){}
//--------------------------Notas------------------------
void agregarNotas(){}

