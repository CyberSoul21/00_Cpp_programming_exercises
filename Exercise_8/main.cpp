/**
 * @file main.cpp 
 * @brief Using funtions and arrays 
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 3/03/2022
 */


#include <cstdlib>
#include <iostream>

using namespace std;
void calcula(int dia1, int mes1, int ano1, int dian1, int mesn1, int anon1)
{
   int a=0,edad,dias;
   a = ano1 - anon1;    
   if(a>0&&mesn1<mes1)
   {
     cout<<"La persona tiene: ";                
     cout<<a;
     cout<<" años cumplidos"<<endl;
   }
    if(a>0&&mesn1>mes1)
   {
     edad = a - 1;
     cout<<"La persona tiene: ";                
     cout<<edad;
     cout<<" años"<<endl;
   }
    if(a==0)
   {
     edad = mes1-mesn1;
     if(mes1>mesn1)
     {
     cout<<"La persona tiene: ";                
     cout<<edad;
     cout<<" meses"<<endl;
     }
     if(edad==0)
     {
     dias = dia1-dian1;           
     cout<<"La persona tiene: ";                
     cout<<dias;
     cout<<" Dias"<<endl;
     }
   }
                
     
                  
  
   
}
int main(int argc, char *argv[])
{
    int dia, mes, ano, dian, mesn, anon;
    cout<<"Digite Fecha actual: "<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Año: ";
    cin>>ano;
    cout<<"Digite Fecha Nacimiento "<<endl;
    cout<<"Dia: ";
    cin>>dian;
    cout<<"Mes: ";
    cin>>mesn;
    cout<<"Año: ";
    cin>>anon;    
    calcula(dia, mes, ano, dian, mesn, anon);
    system("PAUSE");
    return EXIT_SUCCESS;
}

