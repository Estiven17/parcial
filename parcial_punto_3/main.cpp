#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Ingresa 1er numero "<<endl;
    cin>>A;
    cout<<"Ingresa 2do numero  "<<endl;
    cin>>B;
    cout<<"Ingresa 3er numero  "<<endl;
    cin>>C;

    if(A < B && A < C && B < C )
    {
        cout<< "los numeros se ingresaron en forma creciente  ";
    }
    else
    {

        cout<< "los numeros no se ingresaron en forma creciente  ";
    }
}
