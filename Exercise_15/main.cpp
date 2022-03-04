/**
 * @file main.cpp 
 * @brief Files in C++, manage files in C++
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

#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
    int edad;
    char nombre[10];
    
    ofstream entrada("Archivo.txt");//ofstream para colocar archivos 
    if(entrada.fail())
    {
        cout<<"\nOcurrio un error al abrir el archivo"<<endl;
        return 1;
    }
    else 
    {
      cout<<"\nIntroduzca su nombre: ";
      gets(nombre);
      cout<<"\nIntroduzca su Edad: ";
      cin>>edad;
      
      entrada<<nombre<<" "<<edad<<endl;
    }
    
    //getch();
}
