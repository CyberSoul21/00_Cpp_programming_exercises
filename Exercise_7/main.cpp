/**
 * @file main.cpp 
 * @brief Using funtions and arrays 
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 3/03/2022
 */


// arrays example
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void funcion(int a);

int main ()
{
    int A=0;
    string cadena;   
    cout<<"Digite Numero de Aspirantes: "<<endl;
    cin>>A;
 
    funcion(A);
 
    cout<<"\n";
    system("pause");
    return 0;
  
}

void funcion(int a)
{
    int n=0,v=0,e,p;
    float alt;
    char s;
    string nom;
    string nombres[a];
    string clasifica[a];
    char sexo[a];
    int edad[a];
    int peso[a];
    float altura[a]; 
    for(int i=0; i<a; i++)
    {             
            cout<<"Digite Nombre: ";
            cin>>nom;
            nombres[i]=nom;
            cout<<"Digite Sexo: ";
            cin>>s;
            sexo[i]=s;
            cout<<"Digite Edad: ";
            cin>>e;
            edad[i]=e;
            cout<<"Digite Peso: ";
            cin>>p;
            peso[i]=p;
            cout<<"Digite Altura: ";
            cin>>alt;
            altura[i]=p;
            if(alt>=1.83&&73<p<110&&15<e<18)
            {    
                clasifica[i]= "Clasifica";
            }
            else
            {
                clasifica[i]= "No clasifica";
            }    
     }
    for(int i=0; i<a; i++)
    {
       cout<<nombres[i]+" "+clasifica[i]+" "<<endl;
             
    }
    
         
            
   
} 
