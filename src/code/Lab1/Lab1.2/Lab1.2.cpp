#include <iostream> 
#include <string> 
#include <Windows.h> 


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    int age, schoolNumber, classFinished;

    // ����������� ������ � ������������ 

    std::cout << "������� ���� ���: ";
    std::getline(std::cin, name);
    std::cout << "������� ��� �������: ";
    std::cin >> age;
    std::cout << "������� ����� ����� �����: ";
    std::cin >> schoolNumber;
    std::cout << "�������, ����� ����� �� �������� (9 ��� 11): ";
    std::cin >> classFinished;

    int graduationYear;

    // ���������� ��� ��������� ����� 

    if (classFinished == 11) {
        graduationYear = 2024 - (age - 18); // ���� ������� 11 �����, ����� ����������� � 18 ��� 
    }

    else if (classFinished == 9) {
        graduationYear = 2024 - (age - 16); // ���� ������� 9 �����, ����� ����������� � 16 ��� 
    }

    else {
        std::cout << "������: ������ �������� �����." << std::endl;
        return 1;
    }

    // ������� ��������������� ��������� 

    std::cout << "������, " << name << "!" << std::endl;
    std::cout << "���������� � ���������� " << classFinished << "-�� ������ ����� �" << schoolNumber << std::endl;
    std::cout << "� " << graduationYear << " ����." << std::endl;

    return 0;
}