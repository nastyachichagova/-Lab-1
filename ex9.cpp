//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex9.h"
#include <iostream>
#include <cmath>

int ex9(){
    std::cout << "Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток" << std::endl;
    std::cout << "Введите k: ";
    int k;
    std::cin >> k;
    int h = ceil(k/pow(60,2));
    int m = ceil(k/60);
    std::cout << "Идет " << h << "-й час" << std::endl;
    std::cout << "Идет " << m << "-я минута" << std::endl;
    return 0;
}
