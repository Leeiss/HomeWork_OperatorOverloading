#pragma once 
#include <cmath>
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


class ImNumber{
    double real;
    double im;
    ImNumber();
    ImNumber(double real, double im);
    bool operator=(const ImNumber& num)const;
    const double phi();
};