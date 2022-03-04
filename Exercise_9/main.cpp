/**
 * @file main.cpp 
 * @brief POO in C++
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 3/03/2022
 */


#include <cstdlib>
#include <iostream>

using namespace std;
//Declaracion de la clase
class Rectangulo
{
      private:
              float hor;
              float vert;
      public:
             Rectangulo();
             float clacula_area();
             float clacula_tiempo(float,float);
             void setLargo();
             void setAncho();
             float getLargo();
             float getAncho();        
};
//Implementacion de la clase
Rectangulo :: Rectangulo()//Contructor de la clase
{
           hor = 0;
           vert = 0;
}
void Rectangulo :: setAncho()//Metodos
{
     float a;
     cout<<"Digite Ancho: ";
     cin>>a;
     hor = a;
     return;
}
void Rectangulo :: setLargo()
{
     float b;
     cout<<"Digite Largo: ";
     cin>>b;
     vert = b;
     return;
}
float Rectangulo :: getAncho ()
{
     
     return hor;
     
}
float Rectangulo :: getLargo()
{
     
     return vert;
     
}
float Rectangulo :: clacula_area()
{
    float area=0;
    area = 2*(hor*vert);
    return area;
    
}
float Rectangulo :: clacula_tiempo(float a, float b)
{
    float total= 0;
    total = a-b;
    float tiempo = total*10;
    return tiempo;
    
}
int main(int argc, char *argv[])
{
    float a1, a2;
    Rectangulo rec1, rec2;
    cout<<"RECTANGULO: "<<endl;
    rec1.setAncho();
    rec1.setLargo();
    a1 = rec1.clacula_area();
    cout<<"Ventana: "<<endl;
    rec2.setAncho();
    rec2.setLargo();
    a2 = rec2.clacula_area();
    
    cout<<"El tiempo necesario es: "<<rec1.clacula_tiempo(a1,a2)<<" minutos"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
