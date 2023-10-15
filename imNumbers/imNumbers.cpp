#include "imNumbers.hpp"

bool ImNumber::operator=(const ImNumber& num)const{
    return fabs(real - num.real) < EPS && fabs(im - num.im) < EPS;
}