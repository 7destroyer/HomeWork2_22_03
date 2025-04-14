/*
—оздай Math класс с inline-функци€ми:

Х  add(int a, int b)
Х  subtract(int a, int b)
Х  max(int a, int b)

«адача: определить функции в .h файле и использовать их в main.cpp.
*/

#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    Math calculator;

    int num1, num2;

    cout << "¬ведите первое число: " << num1 << endl;
    cout << "¬ведите первое число: " << num2 << endl;

    // »спользуем методы класса Math
    int sum = calculator.add(num1, num2);
    int difference = calculator.subtract(num1, num2);
    int maximum = calculator.max(num1, num2);

    // ¬ыводим результаты
    cout << "sum: " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "maximum: " << maximum << endl;

    return 0;
}
