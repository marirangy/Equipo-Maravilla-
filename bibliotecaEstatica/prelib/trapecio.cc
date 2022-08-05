//Area del trapecio Area=((Base mayor+Base menor)/2)*altura
#include "areas"

float trapecio(const float& bmayor, const float& bmenor, const float& altura)
{
    float res=0;
    res=((bmayor+bmenor)/2)*altura;
    return res;
}