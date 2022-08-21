#include <iostream>
#include "biblioteca/areas"

using namespace std;

int main(){
    float x=8.5;
    float y=10.3;
    float z=7.7;
    float c,p,r,o,t,i;
    
    c= cuadrado(x);
    t= triangulo(x,y);
    i= trapecio (x,y,z);
    r= rectangulo (x,y);
    o= rombo(x,y);
    p= poligono (x,y);

    cout<<"El area del cuadrado es= "<<c<<"cm"<<endl;
    cout<<"El area del triangulo es= "<<t<<"cm"<<endl;
    cout<<"El area del trapecio es= "<<i<<"cm"<<endl;
    cout<<"El area del rectangulo es= "<<r<<"cm"<<endl;
    cout<<"El area del rombo es= "<<o<<"cm"<<endl;
    cout<<"El area del poligono es= "<<p<<"cm"<<endl;
    

}