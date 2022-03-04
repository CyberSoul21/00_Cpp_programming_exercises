/**
 * @file main.cpp 
 * @brief POO in C++, Complex numbers
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 01/12/2010
 * @update: 3/03/2022
 *
 */



#include <cstdlib>
#include <iostream>
#include<conio.h>
using namespace std;
class Complejos
{
  private:
          int a;
          float b;
          int a1;
          float b1;
  
  public:
         Complejos(int,float,int,float);
         void operator +();
         void operator -();
         void operator *(); 
         void Get();       
              
};
Complejos :: Complejos(int real, float inmagine,int real1, float inmagine1)
{
          this->a= real;
          this->b=inmagine;
          this->a1= real1;
          this->b1=inmagine1;
}
void Complejos :: operator +()
{
  int real2= a + a1;
  float inm2= b + b1;
  cout<<real2<<" + "<<inm2<<"i"<<endl;   
} 
void Complejos :: operator -()
{
  int real2= a - a1;
  float inm2= b - b1;  
  cout<<real2<<" + "<<inm2<<"i"<<endl; 
}
void Complejos :: operator*()
{
  int real2= a * a1;
  float inm2= b * b1; 
  cout<<real2<<" + "<<inm2<<"i"<<endl;
}
void Complejos :: Get()
{
     cout<<a<<" + "<<b<<"i"<<endl;
     cout<<a1<<" + "<<b1<<"i"<<endl;
     
}
int main(int argc, char *argv[])
{
    int n;
    Complejos comp1(6,5,9,8);
    comp1.Get();
    do
    {
    cout<<"Que desea hacer: 1.Suma 2.Resta 3.Producto 4.Salir"<<endl; 
    cin>>n;        
      switch(n)
      {
        case 1: +comp1;
        break;
        case 2: -comp1;
        break;
        case 3: *comp1;
        break;
        default: cout<<"Programa finalizado..."<<endl;      
      }
    }while(n!=4);
    
   getch();
}
