/**
 * @file main.cpp 
 * @brief A simple program to calculate prices 
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 3/03/2022
 */
 


#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{   //Assigns variables
    int tipo;
    double cantEsco, cantRecog, cantAroma, desc,  totalEscobas, totalRecogedores, totalAromatizante, descuento, subtotal;
    double e = 10000, r = 5000, a = 8000;
    string n;
    //print and enter datas 
    cout<<"Escoba precio :10000, Recogedor precio :5000, Aromatizante precio :8000"<<endl;
    cout<<"Digite Nombre del cliente: "<<endl;
    cin>>n;
    cout<<"Digite Tipo de cliente: "<<endl;
    cin>>tipo;
    cout<<"Digite cantidad de escobas :"<<endl;
    cin>> cantEsco;
    cout<<"Digite cantidad de Recogedores :"<<endl;
    cin>>cantRecog;
    cout<<"Digite cantidad de Aromatizantes :"<<endl;
    cin>>cantAroma;
    
    switch(tipo)
    {
        case 1: desc = 5; break;//descuento del 5%
        case 2: desc = 8; break;//descuento del 8%
        case 3: desc = 12; break;//descuento del 12%
        case 4: desc = 15; break;//descuento del 15%
        default:cout<<"Esta categoria no existe"<<endl;
    }
    
    totalEscobas = e*cantEsco;
    totalRecogedores = r*cantRecog;
    totalAromatizante = a*cantAroma;
    subtotal = totalEscobas + totalRecogedores + totalAromatizante;
    descuento = (subtotal*desc)/100;
    double Total = subtotal - descuento;
    cout<<"Nombre: "<<n<<endl;
    cout<<"Subtotal: "<<subtotal<<endl;
    cout<<"Tiene un descuento del : " <<desc<<"%"<<endl;
    cout<<"Total a pagar: "<<Total<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
