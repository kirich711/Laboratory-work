#include <iostream> 

using namespace std;


int main() {

    setlocale(LC_ALL, "Russian");

    // ���� ���� ����� 

    double num1, num2;
    cout << "������� ��� �����: ";
    cin >> num1 >> num2;

    // 1. ����� ����� 

    double sum = num1 + num2;
    cout << "����� �����: " << sum << endl;

    // 2. �������� ����� 

    double difference = num1 - num2;
    cout << "�������� �����: " << difference << endl;

    // 3. ������������ ����� 

    double product = num1 * num2;
    cout << "������������ �����: " << product << endl;

    // 4. ������� �������������� ����� 

    double average = (num1 + num2) / 2;
    cout << "������� �������������� �����: " << average << endl;

    // 5. �������� ������������� � ������������ �� ������ 

    double absNum1 = (num1 >= 0) ? num1 : -num1;
    double absNum2 = (num2 >= 0) ? num2 : -num2;
    double maxAbs = (absNum1 >= absNum2) ? absNum1 : absNum2;
    double minAbs = (absNum1 < absNum2) ? absNum1 : absNum2;
    double differenceMaxMinAbs = maxAbs - minAbs;
    cout << "�������� ������������� � ������������ �� ������: " << differenceMaxMinAbs << endl;

    return 0;
}