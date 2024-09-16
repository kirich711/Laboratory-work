#include <iostream> 

using namespace std;


int main() {

    setlocale(LC_ALL, "Russian");

    // Ввод двух чисел 

    double num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2

    double sum = num1 + num2;
    cout << "Сумма чисел: " << sum << endl;

    double difference = num1 - num2;
    cout << "Разность чисел: " << difference << endl;


    double product = num1 * num2;
    cout << "Произведение чисел: " << product << endl;

    double average = (num1 + num2) / 2;
    cout << "Среднее арифметическое чисел: " << average << endl;

    double absNum1 = (num1 >= 0) ? num1 : -num1;
    double absNum2 = (num2 >= 0) ? num2 : -num2;
    double maxAbs = (absNum1 >= absNum2) ? absNum1 : absNum2;
    double minAbs = (absNum1 < absNum2) ? absNum1 : absNum2;
    double differenceMaxMinAbs = maxAbs - minAbs;
    cout << "Разность максимального и минимального по модулю: " << differenceMaxMinAbs << endl;

    return 0;
    
}
