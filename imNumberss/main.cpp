#include "imNumbers.hpp"
#include <iostream>

using namespace std;

int main() {
    ImNumber num1(2, 3);
    ImNumber num2(1, 2);

    ImNumber sum = num1 + num2;
    cout << "Сумма: " << sum << endl;

    ImNumber diff = num1 - num2;
    cout << "Разность: " << diff << endl;

    ImNumber pr = num1 * num2;
    cout << "Произведение: " << pr << endl;

    ImNumber quotient = num1 / num2;
    cout << "Частное: " << quotient << endl;

    cout << "|num1|: " << num1() << endl;

    ImNumber conjugate = !num1;
    cout << "Сопряженное num1: " << conjugate << endl;

    if (num1 == num2)
        cout << "num1 = num2" << endl;
    else
        cout << "num1 != num2" << endl;

    if (num1 < num2)
        cout << "|num1| < |num2|" << endl;
    else
        cout << "|num1| >= |num2|" << endl;

    return 0;
}
