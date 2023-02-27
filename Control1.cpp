#include <iostream>

int main() {
    std::cout << "Задача 1-2:\n";
    int a,b,c;
  std::cout << "\nВведите первое число:\n";
    std::cin >> a;
  std::cout << "Введите второе число:\n";
    std::cin >> b;
  std::cout << "Введите третье число:\n";
    std::cin >> c;
    std::cout << "\nСумма: " << a + b + c;
    std::cout << "\nПроизведение: " << a * b * c;
    std::cout << "\nСреднее: " << (a + b + c)/2;

  std::cout << "\nЗадача 3:\n";
  double cost;
  int many;
  double discount;
  std::cout << "\nВведите стоимость ноутбука:\n";
  std::cin >> cost;
  std::cout << "Введите Количество:\n";
  std::cin >> many;
  std::cout << "Введите скидку n%:\n";
  std::cin >> discount;
  
  discount = discount / 100;
  cost = cost - (cost * discount);
  std::cout << "К оплате:\n" << cost * many;
}
