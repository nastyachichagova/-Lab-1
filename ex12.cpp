//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include <iostream>
#include "Headers/ex12.h"

int ex12() {
    std::cout << "Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если\n"
                 "идеальный вес определяется формулой (рост - 100 = идеальный вес)." << std::endl;
    std::cout << "Введите рост: ";
    int h;
    std::cin >> h;
    std::cout << "Введите вес: ";
    int w;
    std::cin >> w;

    if (h-100 == w){
        std::cout << "Вec идеален" << std::endl;
    } else if (h-100 < w){
        std::cout << "Нужно похудеть на " << w - (h-100) << " кг" << std::endl;
    } else if (h-100 > w){
        std::cout << "Нужно поправиться на " << (h-100) - w << " кг" << std::endl;
    }
    return 0;
}
