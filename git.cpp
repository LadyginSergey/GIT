#include <iostream>
int main() {
    setlocale(LC_ALL, "Russian");
    int shifttime = 4000000;
    int ordercustomer = 10;
    int collectionorder = 40;
    int totalclientsserved = shifttime / (ordercustomer * collectionorder);
    std::cout << "Приветствуем вас в калькуляторе коммунальных услуг!\n";
    std::cout << "Введите сумму, указанную в квитанции: " << shifttime << "\n";
    std::cout << "Сколько подъездов в вашем доме? " << ordercustomer << "\n";
    std::cout << "Сколько квартир в каждом подъезде? " << collectionorder << "\n";
    std::cout << "-----Считаем-----\n";
    std::cout << " Каждая квартира должна платить по " << totalclientsserved;
    /*комментарий 1*/
}