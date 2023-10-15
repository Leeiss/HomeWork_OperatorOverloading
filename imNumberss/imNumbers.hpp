#pragma once
#include <cmath>
#include <iostream>
#define EPS 1e-10

/*
Необходимо реализовать класс ImNumber - комплексное число
Перегрузить операторы 
'+', '-', '/', '*', '+=', '-=', '*=', '/=', '!'(сопряженное), '()' - взятие модуля числа,
'=', '==', '<' (по модулю), '<<' - оператор вывода (например 2+i3)

Реализовать функцию
const double phi() - наименьший положительный угол покательной формы комплекного числа
ImNumber(); - инициализация нулями
ImNumber(double real, double im);


10 баллов
Перед сдачей необходимо создать pull reequest(назвать ветку своей фамилией), чтобы пройти тесты.

Дата последней сдачи 20.10.23 включительно
*/


class ImNumber {
private:
    double real;
    double im;

public:
    ImNumber();
    ImNumber(double real, double im);
    
    double phi() const;
    
    ImNumber operator+(const ImNumber& num) const;
    ImNumber operator-(const ImNumber& num) const;
    ImNumber operator*(const ImNumber& num) const;
    ImNumber operator/(const ImNumber& num) const;
    ImNumber& operator+=(const ImNumber& num);
    ImNumber& operator-=(const ImNumber& num);
    ImNumber& operator*=(const ImNumber& num);
    ImNumber& operator/=(const ImNumber& num);
    bool operator!=(const ImNumber& num) const;
    bool operator==(const ImNumber& num) const;
    bool operator<(const ImNumber& num) const;
    ImNumber operator!() const;
    double operator()() const;
    
    friend std::ostream& operator<<(std::ostream& out, const ImNumber& num);
};
