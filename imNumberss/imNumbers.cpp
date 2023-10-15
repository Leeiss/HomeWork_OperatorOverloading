#include "imNumbers.hpp"

ImNumber::ImNumber() : real(0.0), im(0.0) {}

ImNumber::ImNumber(double real, double im) : real(real), im(im) {}

double ImNumber::phi() const {
    return atan2(im, real);
}

ImNumber ImNumber::operator+(const ImNumber& num) const {
    return ImNumber(real + num.real, im + num.im);
}

ImNumber ImNumber::operator-(const ImNumber& num) const {
    return ImNumber(real - num.real, im - num.im);
}

ImNumber ImNumber::operator*(const ImNumber& num) const {
    return ImNumber(real * num.real - im * num.im, real * num.im + im * num.real);
}

ImNumber ImNumber::operator/(const ImNumber& num) const {
    double dm = num.real * num.real + num.im * num.im;
    return ImNumber((real * num.real + im * num.im) / dm, (im * num.real - real * num.im) / dm);
}

ImNumber& ImNumber::operator+=(const ImNumber& num) {
    real += num.real;
    im += num.im;
    return *this;
}

ImNumber& ImNumber::operator-=(const ImNumber& num) {
    real -= num.real;
    im -= num.im;
    return *this;
}

ImNumber& ImNumber::operator*=(const ImNumber& num) {
    double new_real = real * num.real - im * num.im;
    double new_im = real * num.im + im * num.real;
    real = new_real;
    im = new_im;
    return *this;
}

ImNumber& ImNumber::operator/=(const ImNumber& num) {
    double dm = num.real * num.real + num.im * num.im;
    double new_real = (real * num.real + im * num.im) / dm;
    double new_im = (im * num.real - real * num.im) / dm;
    real = new_real;
    im = new_im;
    return *this;
}

bool ImNumber::operator!=(const ImNumber& num) const {
    return !(*this == num);
}

bool ImNumber::operator==(const ImNumber& num) const {
    return fabs(real - num.real) < EPS && fabs(im - num.im) < EPS;
}

bool ImNumber::operator<(const ImNumber& num) const {
    return hypot(real, im) < hypot(num.real, num.im);
}

ImNumber ImNumber::operator!() const {
    return ImNumber(real, -im);
}

double ImNumber::operator()() const {
    return hypot(real, im);
}

std::ostream& operator<<(std::ostream& os, const ImNumber& num) {
    os << num.real;
    if (num.im >= 0) {
        os << "+i" << num.im;
    } else {
        os << "-i" << -num.im;
    }
    return os;
}