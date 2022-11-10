//
// Created by Anastasia Chichagova on 10.11.2022.
//

#include "Headers/ex19.h"
#include "Headers/sum_of_dig.h"
#include "Headers/mul_of_dig.h"
#include <iostream>

int ex19(){
    std::cout << "Дано трёхзначное число. Определить: \n19.1 является ли произведение его цифр больше числа b\n"
                 "19.2 кратна ли 7 сумма его цифр" <<std::endl;
    std::cout << "Введите трёхзначное число: ";
    int x, b;
    std::cin >> x;
    std::cout << "Введите число b: ";
    std::cin >> b;

    std::cout << "19.1" << std::endl;

    std::cout << "Произведение цифр числа = " << mul_of_dig(x) << std::endl;

    if(mul_of_dig(x) > b){
        std::cout << "Произведение цифр числа больше b" << std::endl;
    }else if(mul_of_dig(x) == b){
        std::cout << "Произведение цифр числа равно b" << std::endl;
    }else{
        std::cout << "Произведение цифр числа меньше b" << std::endl;
    }
    std::cout << "19.2" << std::endl;

    std::cout << "Сумма цифр числа = " << sum_of_dig(x) << std::endl;

    if (sum_of_dig(x) % 7 == 0){
        std::cout << "Сумма цифр числа кратна 7" << std::endl;
    }else{
        std::cout << "Сумма цифр числа не кратна 7" << std::endl;
    }

    return 0;
}