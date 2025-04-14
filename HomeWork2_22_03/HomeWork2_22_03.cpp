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
    setlocale(LC_ALL, "RU");

    Math calculator;

    int num1 = 0, num2 = 0;

    cout << "¬ведите первое число: " << endl;
    cin >> num1;
    cout << "¬ведите второе число: " << endl;
    cin >> num2;

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
