/**
 * @file main.cpp 
 * @brief POO in C++, manage student's score
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 01/12/2010
 * @update: 3/03/2022
 *
 */

#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
class Alumno
{
  private:
          string id;
          float calificacion;
  public:
         Alumno();
         void setId();
         void setCalificacion();
         string getId();
         float getCalificacion();            
};
Alumno::Alumno()
{
   id = "";
   calificacion = 0;             
             
}
void Alumno::setId()
{
     cout<<"Nombre: ";
     cin>>id;
     return;
}
void Alumno::setCalificacion()
{
    int no; 
    do
    { 
     no=1;
     cout<<"Nota: ";
     cin>>calificacion;
     if(calificacion>5 || calificacion<0 )
     {
         cout<<"¡Nota Incorrecta! digita de nuevo"<<endl;
         no=2;             
     }
    }while(no==2);
}
string Alumno::getId()
{
       return id;
}
float Alumno::getCalificacion()
{
      return calificacion;
}

int main(int argc, char *argv[])
{
    int n=0;
    float suma=0,promedio=0;
    char resp;
    cout<<"Digite cantidad de alumnos: ";
    cin>>n;
    Alumno al[n];
    for(int i=0; i<n; i++)
    {
       al[i].setId();
       al[i].setCalificacion();     
    }
    cout<<"\n Desea imprimir notas: S/N"<<endl;
    cout<<"S--> Si   N--> No"<<endl;
    cin>>resp;
    if(resp=='s')
    {
     for(int i=0; i<n; i++)
     {
       cout<<al[i].getId()+": ";
       cout<<al[i].getCalificacion()<<endl;
       suma += al[i].getCalificacion();
     }
     promedio = (suma/n);
     cout<<"\n El promedio de nota es: ";
     cout<<promedio<<endl;
    }
    else 
    {
                       cout<<"Que tenga buen dia...";
    }
    cout<<"\n"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
