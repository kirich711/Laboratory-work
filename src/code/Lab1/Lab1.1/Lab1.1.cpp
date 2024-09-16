#include <iostream> 

using namespace std;


int main() {

    setlocale(LC_ALL, "Russian");

    // Ввод двух чисел 

    double num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    // 1. Сумма чисел 

    double sum = num1 + num2;
    cout << "Сумма чисел: " << sum << endl;

    // 2. Разность чисел 

    double difference = num1 - num2;
    cout << "Разность чисел: " << difference << endl;

    // 3. Произведение чисел 

    double product = num1 * num2;
    cout << "Произведение чисел: " << product << endl;

    // 4. Среднее арифметическое чисел 

    double average = (num1 + num2) / 2;
    cout << "Среднее арифметическое чисел: " << average << endl;

    // 5. Разность максимального и минимального по модулю 

    double absNum1 = (num1 >= 0) ? num1 : -num1;
    double absNum2 = (num2 >= 0) ? num2 : -num2;
    double maxAbs = (absNum1 >= absNum2) ? absNum1 : absNum2;
    double minAbs = (absNum1 < absNum2) ? absNum1 : absNum2;
    double differenceMaxMinAbs = maxAbs - minAbs;
    cout << "Разность максимального и минимального по модулю: " << differenceMaxMinAbs << endl;

    return 0;
}