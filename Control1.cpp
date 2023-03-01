#include <iostream>

int main() {
    std::cout << "Task 1-2:\n"; // Задача 1-2
    int a, b, c;
    std::cout << "\nEnter the first number:\n"; // Введите первое число
    std::cin >> a;
    std::cout << "Enter the second number:\n"; // Введите второе число
    std::cin >> b;
    std::cout << "Enter the third number:\n"; // Введите третье число
    std::cin >> c;
    std::cout << "\nSum: " << a + b + c; // Сумма
    std::cout << "\nComposition: " << a * b * c; // Произведение
    std::cout << "\nAverage: " << (a + b + c) / 2; // Среднее

    std::cout << "\n\nTask 3:\n";
    double cost; // цена
    int quan; // Количество
    double discount; // Скидка
    std::cout << "\nEnter the cost:\n"; // Введите стоимость ноутбука
    std::cin >> cost;
    std::cout << "Enter the quantity:\n"; // Введите количество
    std::cin >> quan;
    std::cout << "Enter a discount n%:\n"; // Введите скидку
    std::cin >> discount;

    discount = discount / 100;
    cost = cost - (cost * discount);
    std::cout << "For Payment:\n" << cost * quan; // К оплате
}
