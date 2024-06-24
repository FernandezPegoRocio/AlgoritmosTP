#include <iostream>

using namespace std;


int main()
{
    int count=4;
    double num=1;
    int prom=1;
    
    while (count)
    {
        
        cout<<"ingrese valor: ";
        cin >>num;
        cin.ignore();
        prom*=num;
        count--;
    }
    
    cout <<"El producto de los numeros es: "<<prom;

    return 0;
}
