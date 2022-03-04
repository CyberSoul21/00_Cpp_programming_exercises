/**
 * @file main.cpp 
 * @brief 
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 3/03/2022
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  string articulo[3];
  int tabla[3][3];
  int n;
  
  for(int j=0; j<3; j++)
  {
    for(int i=0; i<3; i++)
    {
      if(i==0)
      {      
        cout<<"Digite Articulo: ";      
        cin>>articulo[j]; 
      }
      n=i+1;
      cout<<"Produccion en turno "<<n<<": ";      
      cin>>tabla[i][j];
    }
  }

  cout<<"\n";
  int suma = 0,mayor=0;
  string x;
  
  for(int j=0; j<3; j++)
  {
    for(int i=0; i<3; i++)
    {
      suma = tabla[i][j] +suma;      
      if(i==2)
      {      
        cout<<"Total Producido Articulos"<<" "+articulo[j];
        cout<<": ";
        cout<<suma<<endl;  

        if(tabla[i][j]>mayor)
        {
          mayor = tabla[i][j];
          x =  tabla[i][j];                
        } 
        suma=0;                 
      }
    }
  }

  int suma1=0,t=0;
  
  for(int j=0; j<3; j++)
  {
    for(int i=0; i<3; i++)
    {
      suma1 = tabla[j][i] +suma1;      
      if(i==2)
      {     
        t=j+1;       
        cout<<"Total Producido turno "<<t;
        cout<<": ";
        cout<<suma1<<endl;   
        suma1=0;                 
      }
    }
  }
  for(int j=0; j<3; j++)
  {
    for(int i=0; i<3; i++)
    {
      cout<<"     "<<tabla[i][j];
    }
    
    cout<<"\n";
  
  } 
  
  cout<<"Articulo con mayor produccion "<<x<<endl;
   
  system("PAUSE");
  return EXIT_SUCCESS;
}
 
