/**
 * @file main.cpp 
 * @brief POO in C++, modificate the way how to show a date
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 01/12/2010
 * @update: 3/03/2022
 */


#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;


class fecha
{
  private:
          int dia;
          int mes;
          int ano;
          
  public:
         fecha();
         void setFecha(int, int , int ); 
         void setFecha();
         string setFecha1();
};

fecha :: fecha()//Constructor
{
      dia = 21;
      mes = 6;
      ano = 2012;
      
      
}
void fecha :: setFecha(int a, int b, int c)
{
   if(a<32 & b<=12 & c>=2012)
   {  
     dia = a;
     mes = b;
     ano = c;
   }
   else
   {
       cout<<"Fecha invalida intenta de nuevo ;)"<<endl;
   }
     return;
}
void fecha :: setFecha()
{
     cout<<dia<<"/"<<mes<<"/"<<ano<<endl;
}
string fecha :: setFecha1()
{
   string NomMes;
   switch(mes)
   {
     case 1: NomMes = "Enero";
     break;
     case 2: NomMes = "Febrero";
     break;
     case 3: NomMes = "Marzo";
     break;
     case 4: NomMes = "Abril";
     break;
     case 5: NomMes = "Mayo";
     break;
     case 6: NomMes = "Junio";
     break;
     case 7: NomMes = "Julio";
     break;
     case 8: NomMes = "Agosto";
     break;
     case 9: NomMes = "Septiembre";
     break;
     case 10: NomMes = "Octubre";
     break; 
     case 11: NomMes = "Nobiembre";
     break;
     case 12: NomMes = "Diciembre";
     break;     
   }    
   cout<<dia<<"/"<<NomMes<<"/"<<ano<<endl;
}


int main(int argc, char *argv[])
{
    int a, b, c,n;
    fecha fe;
    fe.setFecha();
    do
    {
    cout<<"¿Que desea hacer?"<<endl;
    cout<<"1---->Modifica Fecha"<<endl;
    cout<<"2---->Imprime Fecha (Normal)"<<endl;
    cout<<"3---->Imprime Fecha (mes palabra)"<<endl;
    cout<<"4---->Salir"<<endl;
    cin>>n;
    if(n==1)
    {
     cout<<"Digite Dia ";
     cin>>a;
     cout<<"Digite mes ";
     cin>>b; 
     cout<<"Digite ano ";
     cin>>c;
     fe.setFecha(a,b,c); 
         
    }
    else if(n==2)
    {
      fe.setFecha();   
    }
    else if(n==3)
    {
         fe.setFecha1();
    }
    }while(n!=4);
    system("PAUSE");
    return EXIT_SUCCESS;
}
