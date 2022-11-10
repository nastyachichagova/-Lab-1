//
// Created by Anastasia Chichagova on 10.11.2022.
//

#include "Headers/ex15.h"
#include <iostream>

int ex15(){
    std::cout << "Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года." <<std::endl;
    int month;
    std::cout << "Введите номер месяца: ";
    std::cin >> month;

    if (month == 12 || (1 <= month && month <= 2)){
        std::cout << "Зима"<< std::endl;
        if (month == 12){
            std::cout << "Декабрь"<< std::endl;
        }else if(month == 1){
            std::cout << "Январь"<< std::endl;
        }else{
            std::cout << "Февраль"<< std::endl;
        }
    }
    if (3 <= month && month <= 5){
        std::cout << "Весна"<< std::endl;
        if (month == 3){
            std::cout << "Март"<< std::endl;
        }else if(month == 4){
            std::cout << "Апрель"<< std::endl;
        }else{
            std::cout << "Май"<< std::endl;
        }
    }
    if (6 <= month && month <= 8){
        std::cout << "Лето"<< std::endl;
        if (month == 6){
            std::cout << "Июнь"<< std::endl;
        }else if(month == 7){
            std::cout << "Июль"<< std::endl;
        }else{
            std::cout << "Август"<< std::endl;
        }
    }
    if (9 <= month && month <= 11){
        std::cout << "Осень"<< std::endl;
        if (month == 9){
            std::cout << "Сентябрь"<< std::endl;
        }else if(month == 10){
            std::cout << "Октябрь"<< std::endl;
        }else{
            std::cout << "Ноябрь"<< std::endl;
        }
    }

    return 0;
}
