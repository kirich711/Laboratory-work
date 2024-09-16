#include <iostream> 
#include <Windows.h> 

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const double PI = 3.14159; // Константа для числа Пи 
    double radius1, radius2;

    // Ввод радиусов двух кругов 

    cout << "Введите радиус первого круга: ";
    cin >> radius1;
    cout << "Введите радиус второго круга: ";
    cin >> radius2;

    // Вычисление площадей кругов 

    double area1 = PI * radius1 * radius1;
    double area2 = PI * radius2 * radius2;

    // Сравнение площадей и вывод результата 

    if (area1 > area2) {
        cout << "Круг 1 имеет большую площадь." << endl;
        cout << "Разница площадей: " << area1 - area2 << endl;
    }

    else if (area2 > area1) {
        cout << "Круг 2 имеет большую площадь." << endl;
        cout << "Разница площадей: " << area2 - area1 << endl;
    }

    else {
        cout << "Оба круга имеют одинаковую площадь." << endl;
    }

    return 0;
}