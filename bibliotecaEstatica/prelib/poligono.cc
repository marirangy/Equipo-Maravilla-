//Area de poligonos regulares Area=(Perimetro*apotema)/2
#include "areas"

float poligono(const float& perimetro, const float& apotema){
    float res=0;
    res=(perimetro*apotema)/2;
    return res;
}
