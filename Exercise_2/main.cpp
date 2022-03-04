/**
 * @file main.cpp 
 * @brief Determinate salary based on hours worked
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
{
    double h, s1, sueldo, des, a;
    string s;
   
    cout << "Enter Name: ";
    cin>>s;
    cout<<"Enter hours Worked :"<<endl;
    cin>>h;
    cout<<"Enter pay per hour: "<<endl;
    cin>>s1;


    if (h<40)
    {
        a = s1;
        sueldo = a*h;
        cout<<s<<" Hours "<< h <<" your salary is: "<<sueldo<<endl;
    }  
    else if(h>40 && h<50)
    {
        a = s1*2;
        sueldo = a*h;
        cout<<s<<" Hours "<< h <<" your salary is: "<<sueldo<<endl;
    }
    else if(h>50)
    {
        a = s1*3;
        des = ((a*h)*12)/100;//Tax
        sueldo = a*h - des;//salary
        cout<<s<<" Hours "<< h <<" your salary is: "<<sueldo<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
