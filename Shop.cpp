#include <iostream>

int main() {
  
  double candy = 10.50;
  int many = 5;
  double discount = candy*0.05;
  std::cout << "Конфета стоит: " << candy;
  std::cout << "\nКонфета по скидке: " << candy - discount;
  std::cout << "\nКоличество: " << many;
  std::cout <<"\nК оплате: " << (candy - discount) * many;


  
/*
Задача: Скидка
Клиент пришел в магазин и решил купить конфет.
Сейчас в магазине действует акция, скидка на конфеты 5%
1 конфета, стоит - 10.50;
Всего купит: 5;
Посчитать, сколько это стоит с учётом скидки?
  */
}
