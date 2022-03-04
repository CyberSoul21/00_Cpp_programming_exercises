#include <cstdlib>
#include <iostream>

using namespace std;
int A=0;
float M=0, nota1, nota2,nota3,nota4,nota5;
int contador;
float obtenerPromedio(float a, float b, float c, float d, float e)
{
      float resultado;
      resultado = (a+b+c+d+e)/5;
      return resultado;
      }
int main(int argc, char *argv[])
{
    
    cout<<"Ingrese numero de alumnos"<<endl;
    cin>>A;
    int n = 0;
    float tabla[A][2];
    do{
        cout<<"Digite Matricula: "<<endl;
        cin>>M;
        tabla[n][0]=M;
       
        cout<<"Digite nota 1: "<<endl;
        cin>>nota1;
        cout<<"Digite nota 2: "<<endl;
        cin>>nota2;
        cout<<"Digite nota 3: "<<endl;
        cin>>nota3;
        cout<<"Digite nota 4: "<<endl;
        cin>>nota4;
        cout<<"Digite nota 5: "<<endl;
        cin>>nota5;
        tabla[n][1]= obtenerPromedio(nota1,nota2,nota3,nota4,nota5);                  
        n++; 
        nota1 = 0;
        nota2 = 0; 
        nota3 = 0; 
        nota4 = 0; 
        nota5 = 0;              
       
    }while(n<A);
    for(int x=0; x<=A; x++)//Imrpime tabla
    { 
      for (int y=0; y<=2; y++)
      {
          cout<<tabla[x][y]<<"\n";
      }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
