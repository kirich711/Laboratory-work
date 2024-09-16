#include <iostream> 
#include <string> 
#include <Windows.h> 


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    int age, schoolNumber, classFinished;

    // Запрашиваем данные у пользователя 

    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, name);
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;
    std::cout << "Введите номер вашей школы: ";
    std::cin >> schoolNumber;
    std::cout << "Введите, какой класс вы окончили (9 или 11): ";
    std::cin >> classFinished;

    int graduationYear;

    // Определяем год окончания школы 

    if (classFinished == 11) {
        graduationYear = 2024 - (age - 18); // Если окончен 11 класс, школе заканчивают в 18 лет 
    }

    else if (classFinished == 9) {
        graduationYear = 2024 - (age - 16); // Если окончен 9 класс, школе заканчивают в 16 лет 
    }

    else {
        std::cout << "Ошибка: введен неверный класс." << std::endl;
        return 1;
    }

    // Выводим поздравительное сообщение 

    std::cout << "Привет, " << name << "!" << std::endl;
    std::cout << "Поздравляю с окончанием " << classFinished << "-го класса школы №" << schoolNumber << std::endl;
    std::cout << "в " << graduationYear << " году." << std::endl;

    return 0;
}