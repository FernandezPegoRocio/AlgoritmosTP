#include <iostream>
using namespace std;
#include  <cmath> 
double volumen_fun (double radio, double altura,double pi)
{
return (pi*(radio*radio)*altura)/3;
}
int mail()
{
double radio = 14.5;
double altura=26.79;
const double pi=3.141592;
double volumen = volumen_fun(radio, altura, pi);

cout<<"el volumen de un cono es:" <<volumen<<endl;

return 0;
}

