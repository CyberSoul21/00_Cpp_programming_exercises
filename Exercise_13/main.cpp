/**
 * @file main.cpp 
 * @brief POO in C++, Simulate sales
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 01/12/2010
 * @update: 3/03/2022
 */


#include <cstdlib>
#include <iostream>
#include <fstream>
//#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;
class ventas
{
      private:
              double num;
              string nombre;
      public:
             ventas();
             void setVenta();
             void setNombre();
             double getVenta();
             string getNombre();
};
ventas :: ventas()
{
       nombre = "";
       num=0;
}
void ventas :: setVenta()
{
     cout<<"Numero de ventas: ";
     cin>>num;
     return;
}
void ventas :: setNombre()
{
     cout<<"Digite Nombre: ";
     cin>>nombre;
     return;
}
double ventas :: getVenta()
{
       return num;
}
string ventas :: getNombre()
{
       return nombre;
}
int main(int argc, char *argv[])
{
    int n=0;
    double suma=0,promedio=0;
    char resp;
    cout<<"\nIntroduzca numero de Agentes: ";
    cin>>n;
    ventas v[n];
    for(int i=0; i<n; i++)
    {
      v[i].setNombre();    
      v[i].setVenta();    
    }
    ofstream entrada("Archivo.txt");//ofstream para colocar archivos 
    if(entrada.fail())
    {
        cout<<"\nOcurrio un erro al abrir el archivo"<<endl;
        return 1;
    }
    else 
    {
     for(int i=0; i<n; i++)
     {       
      entrada<<v[i].getNombre()<<" "<<v[i].getVenta()<<endl;
     }
    }
    cout<<"\n Desea imprimir Promedio venta: S/N"<<endl;
    cout<<"S--> Si   N--> No"<<endl;
    cin>>resp;
    if(resp=='s')
    {
     for(int i=0; i<n; i++)
     {
       cout<<v[i].getNombre()+": ";
       cout<<v[i].getVenta()<<endl;
       suma += v[i].getVenta();
     }
     promedio = (suma/n);
     cout<<"\n El promedio de venta es: ";
     cout<<promedio<<endl;
     cout<<"Podra ver el listado almacenado en el archivo de texto...";
    }
    else 
    {
      cout<<"Podra ver el listado almacenado en el archivo de texto...";
    }
    
    getch();
}
