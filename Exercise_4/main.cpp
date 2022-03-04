/**
 * @file main.cpp 
 * @brief The program finds the highest salary
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 2/12/2010
 * @update: 3/03/2022
 */


#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int n=0,a;
    cout<<"Enter number of employees ";
    cin>>n;
    
    
    string nombres[n];
    int ed[n];
    int sueldo[n];

    for(int i=0; i<n; i++)
    {
      cout<<"Enter Name: ";
      cin>>nombres[i];  
      cout<<"Enter age: ";
      cin>>ed[i]; 
      cout<<"Enter salary: ";
      cin>>sueldo[i]; 
       
      cout<<"\n"<<endl;     
    }
    cout<<"\n"<<endl;
    
    for(int i=0; i<n; i++)
    {
      cout<<nombres[i]+"--->>";
      cout<<ed[i]; 
      cout<<"--->>";
      cout<<sueldo[i]<<endl;
           
    }

    int mayor = 0;
    for(int i=0; i<n; i++)
    {
      
      if(sueldo[i]>mayor)
      {
        mayor=sueldo[i];
        a=i;
        
      }                 
           
    }

    cout<<"\n"<<endl; 
    cout<<nombres[a];
    cout<<" has highest salary";
    cout<<mayor<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
