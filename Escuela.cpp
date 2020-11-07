
#include<iostream>
#include<stdlib.h>

using namespace std;

class Profesor{
    private:
        string Especialidad;
        int ID;
        string nombre;
    public:
        Profesor(string,int,string);
        void Eliminar();
        void Modificar();
        void ListaAlumnos();

};

Profesor::Profesor(string _Especialidad,int _ID, string _Nombre ){
    Especialidad = _Especialidad;
    ID = _ID;
    nombre = _Nombre;
}

void Profesor::Eliminar(){
    cout<<"Que Alumno desa dar de baja"<<endl;
    system("pause");
}

void Profesor::Modificar(){
    cout<<"Que alumno desea Modificar"<<endl;
    cout<<"El alumno ' ' ha sido modificado"<<endl;
}

void Profesor::ListaAlumnos(){
    cout<<"Cargando Lista de alumnos"<<endl;
    cout<<"Lista cargada"<<endl;
}

//Clase Alumno
class Alumno{
    private:
        int Matricula;
        string Nombre;
        int Edad;
        string Sexo;
    public:
        Alumno(int,string,int,string);
        void Registrar();
        void Modificar();
};

Alumno::Alumno(int _Matricula,string _Nombre,int _edad,string _sexo){
    Matricula = _Matricula;
    Nombre = _Nombre;
    Edad = _edad;
    Sexo = _sexo;
}

void Alumno::Registrar(){
    cout<<"Datos del alumno:"<<endl;
    cout<<"Alumno Registrado"<<endl;
}

void Alumno::Modificar(){
    cout<<"Nombre del alumno a modificar"<<endl;
    cout<<"Alumno Modificado"<<endl;
}

//Curso
class Curso{
    private:
        int NRC;
        string Nombre;
        int Creditos;
    public:
        Curso(int,string,int);
        void Consultar();
        void Eliminar();
        void Modificar();
        void Alerta();
        void RegistroAlumo();
};

Curso::Curso(int _NRC,string _Nombre,int _Creditos){
    NRC = _NRC;
    Nombre = _Nombre;
    Creditos = _Creditos;
}

void Curso::Consultar(){
    cout<<"Consultando la lista del curso"<<endl;
    cout<<"Cerrando la lista del curso"<<endl;
}

void Curso::Alerta(){
    cout<<"!!! Alumnos se añadio algo al curso favor de cehcarlo"<<endl;
}

void Curso::Eliminar(){
    cout<<"El curso ha finalizado y se eliminara."<<endl;
}

void Curso::Modificar(){
    cout<<"Que desea modificar del curso."<<endl;
    cout<<"Se modifico correctamente"<<endl;
}

void Curso::RegistroAlumo(){
    cout<<"codigo de registro: "<<endl;
}

//Material extra
class MaterialX{
    private:
        string NombreArchivo;
        string Archivo;
    public:
        MaterialX(string,string);
        void EliminarArchivo();
        void SubirArchivo();
        void AbrirArchivo();
};

MaterialX::MaterialX(string _NombreA,string _Archivo){
    NombreArchivo = _NombreA;
    Archivo = _Archivo;
}

void MaterialX::AbrirArchivo(){
    cout<<"Abriendo Archivo..."<<endl;
    cout<<"Cerrando Archivo..."<<endl;
}

void MaterialX::EliminarArchivo(){
    cout<<"Nombre del archivo a eliminar"<<endl;
    cout<<"Elimianndo archivo"<<endl;
}

void MaterialX::SubirArchivo(){
    cout<<"Archivo que va a subir: "<<endl;
    cout<<"Archivo Subido"<<endl;
}

//Chats
class Chat{
    private:
        string NombreChat;
        string IDchat;
        int Size;
    public:
        Chat(string,string,int);
        void AbrirChat();
        void CerrarChat();
        void EnviarMensaje();
        void EnviarArchivo();
};

Chat::Chat(string _NombreChat,string _IDchat,int _size){
    NombreChat = _NombreChat;
    IDchat = _IDchat;
    Size = _size;
}

void Chat::AbrirChat(){
    cout<<"Abriendo chat"<<endl;
}

void Chat::CerrarChat(){
    cout<<"Cerrar chat"<<endl;
}

void Chat::EnviarArchivo(){
    cout<<"Cual archivo desea enviar"<<endl;
}

void Chat::EnviarMensaje(){
    cout<<"'Autor':Mensaje"<<endl;
}

//Tareas
class AsignarTareas:Profesor{
    private:
        string NombreTarea;
        string IdTarea;
        string Tarea;
        int PuntuacionTarea;
    public:
        AsignarTareas(string,int,string,string,string,string,int);
        void CrearTarea();
        void ModificarTarea();
        void EliminarTarea();
        void CerrarTarea();
        void DevolverTarea();
};

AsignarTareas::AsignarTareas(string _Especialidad,int _ID,string _Nombre,string _Nt,string _IdT,string _PlazoTarea,int _Punt) : Profesor(_Especialidad,_ID,_Nombre){    
    NombreTarea = _Nt;
    IdTarea = _IdT;
    Tarea = _PlazoTarea;
    PuntuacionTarea = _Punt;
}

void CrearTarea(){
    cout<<"|Nombre|Plazo|Puntuacion|"<<endl;
    cout<<"Descripcion";
}

void ModificarTarea(){
    cout<<"Actualizar tarea 1"<<endl;
    cout<<"|Nombre|Plazo|Puntuacion|"<<endl;
    cout<<"Descripcion";
}

void EliminarTarea(){
    cout<<"Eliminar tarea 1"<<endl;
    cout<<"|Nombre|Plazo|Puntuacion|"<<endl;
    cout<<"Descripcion";
}

void CerrarTarea(){
    cout<<"Cerrar tarea 1 Antes del plazo"<<endl;
    cout<<"|Nombre|Plazo|Puntuacion|"<<endl;
    cout<<"Descripcion";
}

void DevolverTarea(){
    cout<<"Tarea 1"<<endl;
    cout<<"|Nombre|Plazo|Puntuacion|"<<endl;
    cout<<"Descripcion"<<endl;
    cout<<"Comentarios"<<endl;
}


int main(int argc, char const *argv[]){

    int opc;

    Profesor P1("Ciencias de la computacion",0,"Aldolfo");
    Alumno A1(201945530,"Abraham Acosta Herrera",19,"Masculino");
    Chat C1("Chat 1","C001",10);

    P1.Eliminar();
    P1.ListaAlumnos();
    P1.Modificar();

    C1.AbrirChat();
    C1.CerrarChat();

    CrearTarea();
    ModificarTarea();
    CerrarTarea();

    A1.Modificar();
    A1.Registrar();

    return 0;
}

