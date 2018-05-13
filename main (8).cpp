#include <iostream>
#include <stdlib.h>

 using namespace std;
//-------------------------------------------


//---------------------------------------------
 
 
// estructura de contadores
  struct contadores
{
  
int repeticiones;
   
int series;
   
int pesoUtilizado;

int asistencias;

int evaluacionfisica;
 

};
// estructura para los ejercicios
  struct ejercicio
{
  
string grupoMuscular[10];
  
string NomEjerci[20];
  
contadores y;

};

//estructura para las rutinas 
  struct rutinas
{
  
int objetivo;
   
ejercicio rut;
 
};

//estructura para los usuarios
  struct usuario
{
  
string correo;
  
string id;
  
string nombre;

string apellido;
  
bool esAdmin;
  
string facultad;
  
string cargo;

rutinas ejer;
string usuario;
string contrasena;


};
//funciones para recoger la info del usuario
  string getCorreo (usuario u);

string getId (usuario u);

string getNombre (usuario u);

string getApellido (usuario u);

bool esAdmin (usuario u);

string getFacultad (usuario u);

string getCargo (usuario u);

string getUsuario (usuario u);
string getContrasena  (usuario u);

 
//funciones para modificar la info del usuario

void setCorreo (usuario u);

void setID (usuario u);

void setNombre (usuario u);

void setEsAdmin (usuario u);

void setFacultad (usuario u);

void setCargo (usuario u);

void setUsuario (usuario u);
void setContrasena (usuario u);
void setApellido  (usuario u);
//Funciones para mostrar reportes 
void mostrarUsuarios(usuario a[]);

void MostrarEvaluacionFisica (usuario a[]);

//funciones para el menu
int ingreso (int);

int creacion (int);

int estudiante (int);

int personal (int);

int persona (int);

int admin (int);

int registro (int);

int usuario (int);

int reportes (int);

int admini (int);


//Variables Globales 
//es global para que todas las funciones tengas acceso a esta informacion y la puedan modificar
int tamUsuario=0;




//inicio del main 
  int main ()
{
//Arreglo de usuarios: aqui se guardaran todos los usuarios
  usuarios u[50];
 
int inicio;
  
cout << "             Bienvenido al Gimnasio CJFD           " << endl;
  
cout << "     ¿Que desea Hacer?" << endl;
  
cout << "     1)Ingresar" << endl;
  
cout << "     2)Crear una Cuenta" << endl;
  
cin >> inicio;
  
system ("cls");
  
if (inicio == 1)
    {
      
ingreso (inicio);
    
}
  
if (inicio == 2)
    
    {
      
creacion (inicio);
    
}
  
 
return 0;

 
}


 
int ingreso (int eleccion)
{
  
 
int ing;
  
 
cout << "             Ingresando a cuenta           " << endl;
  
 
cout << "     1)Personal" << endl;
  
 
cout << "     2)Usuario" << endl;
  
 
cin >> ing;
  system ("cls");
 
if (ing == 1)
    {
personal (ing);
    
 
}
  
 
if (ing == 2)
    {
      
 

      
 
registro (ing);
    
 
}

}


 
 
 
int creacion (int est)
{
  
 
int name;
  
 
cout << "             Creacion Cuenta           " << endl;
  
 
cout << "     1)Estudiante            " << endl;
  
 
cout << "     2)Personal                      " << endl;
  
 
cin >> name;
  
 
if (name == 1)
    {
      
 
system ("cls");
      
 
 
estudiante (name);
    
 
}
  
 
if (name == 2)
    {
      
 
system ("cls");
      
 
persona (name);
    
 
 
}

 
}


 
int
estudiante (int nea)
{
  
 
int a;
  
cout << "             Creaci\242n Estudiante Nuevo           " << endl;
  
 
 
cout << "	    Apellido" << endl;
  
 
cout << "     Numero de identificaci\242n" << endl;
  
 
cout << "     Facultad" << endl;
  
 
cout << "     Correo" << endl;
  
 
cout << "     salir a menu" << endl;
  
 
cin >> a;
  
 
return a;

 
}


 
int
persona (int aja)
{
  
 
int as;
  
 
cout << "             Creaci\242n Personal Nueva           " << endl;
  
 
 
cout << "	    Apellido" << endl;
  
 
cout << "     Numero de identificaci\242n" << endl;
  
 
cout << "     Correo" << endl;
  
 
cout << "     salir a menu" << endl;
  
 
cin >> as;
  
 
return as;

 
}


 
 
int personal (int perso) 
{
  
 
int eleccion;
  
 
 
cout << "             Menu Personal           " << endl;
  
 
cout << "     1)Administraci\242n            " << endl;
  
 
cout << "     2)Usuario                   " << endl;
  
 
cout << "     3)Reportes                  " << endl;
  
 
cout << "     4)Salir                     " << endl;
  
 
cin >> eleccion;
  
 
if (eleccion == 1)
    {
      
 
 
system ("cls");
      
 
admin (eleccion);
    
 
}
  
 
if (eleccion == 2)
    {
      
 
system ("cls");
      
 
usuario (eleccion);
    
 
}
  
 
if (eleccion == 3)
    {
      
 
system ("cls");
      
 
reportes (eleccion);
    
 
}
  
 
if (eleccion == 4)
    {
      
 
system ("cls");
      
 
cout << "se va a cerrar";
      
 
return 0;
    
 
}
  
 
return eleccion;

 
}


 
 
int registro (int abc) 
{
  
 
int user;
  
 
 
cout << "             Menu Personal           " << endl;
  
 
cout << "     1)Usuario           " << endl;
  
 
cout << "     2)Salir                     " << endl;
  
 
cin >> user;
  
 
if (user == 1)
    {
      
 
 
system ("cls");
      
 
admini (user);
    
 
}
  
 
if (user == 2)
    {
      
 
return 0;
    
 
}
  
 
return user;

 
}


 
int admin (int adm)
{
  
int numadm;
  
 
cout << "             Administraci\242n            " << endl;
  
 
cout << "     1)Usuario            " << endl;
  
 
cout << "     2)Rutinas                   " << endl;
  
 
cin >> numadm;
  
 
if (numadm == 1)
    {
    
 
 
 
}
  
return numadm;

}


 
int admini (int reg)
{
  
 
int qqq;
  
 
cout << "             Usuario           " << endl;
  
 
cout << "     1)Registro" << endl;
  
 
cout << "     2)Rutina del dia" << endl;
  
 
cout << "     3)Cargar rutina" << endl;
  
 
cout << "     4)registrar ejericio" << endl;
  
 
cout << "     5)cerrar sesion" << endl;
  
 
cin >> qqq;

 
} 
 
int usuario (int usa)
{
  
 
int nwe;
  
 
cout << "             Usuario Base de Datos          " << endl;
  
 
cout << "     1)Modificar" << endl;
  
 
cout << "     2)Crear" << endl;
  
 
cout << "     3)Inactivar" << endl;
  
 
cout << "     4)Eliminar" << endl;
  
 
cout << "     5)salir" << endl;
  
 
cin >> nwe;
  
 
return nwe;

 
}


 
int reportes (int aaa)
{
  
 
int zzz;
  
 
cout << "             Reportes          " << endl;
  
 
cout << "     1)Ver Usuarios" << endl;
  
 
cout << "     2)Usuarios evoluciC3n" << endl;
  
 
cout << "     3)Asistencia" << endl;
  
 
cout << "     4)salir" << endl;
  
cin >> zzz;
  
 
return zzz;

 
}


//funciones para regreasar info del usuario

  string getCorreo (usuario u)
{
  
return u.correo;

}


string getId (usuario u)
{
  
return u.id;

}


string getNombre (usuario u)
{
  
return u.nombre;

}


bool esAdmin (usuario u)
{
  
return u.esAdmin;

}


string getFacultad (usuario u)
{
  
return u.facultad;

}


string getCargo (usuario u)
{
  
return u.cargo;

}

string getUsuario (usuario u){
return u.usuario;
}
string getContrasena (usuario u){
return u.contrasena;
}
//Funciones para modificar la informacion del usuario

//Funciones para mostrar informacion
 void mostrarUsuarios(usuario a[]){
int tam= tamUsuario;
string temp;
  
for (int i = 0; i < tam; i++)
    {
      
    for (int j = i; j < tam; j++)
	{
        	  
            if (a[j] < a[i])
	    {
	      
            temp = a[i];
	      
            a[i] = a[j];
	      
            a[j] = temp;
	    
            }
	
            }
    
        }
for (int k=0; )
 }
 
 
 
 void MostrarEvaluacionFisica (usuario a[]){
 int tam= tamUsuario;
 		for(int i=0; i < tam; i++){
    		
        if(a[i].ejer.rut.y.asistencias  >= 20){
        cout<<"Nombre: "<< a[i].nombre<<endl;
        cout<<"Apellido: "<< a[i].apellido<<endl;
        cout<<"Facultad: "<< a[i].facultad<<endl;
        cout<<"Cargo: "<< a[i].cargo<<endl;
        cout<<"Correo: "<<a[i].correo<<endl;
        cout<<"ID: "<< a[i].id<<endl;
        a[i].ejer.rut.y.evaluacionfisicas ++;
        
        
        
        }
    }
 }
