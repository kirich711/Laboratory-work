#include <iostream> 
#include <Windows.h> 

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const double PI = 3.14159; // ��������� ��� ����� �� 
    double radius1, radius2;

    // ���� �������� ���� ������ 

    cout << "������� ������ ������� �����: ";
    cin >> radius1;
    cout << "������� ������ ������� �����: ";
    cin >> radius2;

    // ���������� �������� ������ 

    double area1 = PI * radius1 * radius1;
    double area2 = PI * radius2 * radius2;

    // ��������� �������� � ����� ���������� 

    if (area1 > area2) {
        cout << "���� 1 ����� ������� �������." << endl;
        cout << "������� ��������: " << area1 - area2 << endl;
    }

    else if (area2 > area1) {
        cout << "���� 2 ����� ������� �������." << endl;
        cout << "������� ��������: " << area2 - area1 << endl;
    }

    else {
        cout << "��� ����� ����� ���������� �������." << endl;
    }

    return 0;
}