/**
 * @file main.cpp 
 * @brief The program finds the highest note
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
    double a,b,c;

    cout<<"Please Enter estudent's score 1: ";
    cin>>a;
    cout<<"Please Enter estudent's score 2: ";
    cin>>b;
    cout<<"Please Enter estudent's score 3: ";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<"\n The highest note is from student 1\n";
    }
    else if(b>a && b>c)
    {
        cout<<"\n The highest note is from student 2\n";
    }
    else if(c>b && c>a)
    {
        cout<<"\n The highest note is from student 3\n";
    }
    else
    {cout<<"All scores are equal\n";}
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
