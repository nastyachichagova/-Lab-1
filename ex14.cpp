//
// Created by Anastasia Chichagova on 10.11.2022.
//
#include "Headers/ex14.h"
#include <iostream>

int ex14(){
    std::cout << "Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям\n"
                 "предоставляется скидка 20%. Ввести продолжительность разговора и день недели(число от 1 до 7)." <<std::endl;
    std::cout << "Пусть стоимость переговоров равно 10 руб/мин" <<std::endl;
    int time, day;
    std::cout << "Введите продолжительность разговора: ";
    std::cin >> time;
    std::cout << "Введите день недели (1-7): ";
    std::cin >> day;
    if (day == 6 || day ==7){
        std::cout << "Стоимость: " << time*10*0.8 << std::endl;
    }else{
        std::cout << "Стоимость: " << time*10 << std::endl;
    }
    return 0;
}