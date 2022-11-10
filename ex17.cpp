//
// Created by Anastasia Chichagova on 10.11.2022.
//

#include "Headers/ex17.h"
#include <iostream>
#include <cmath>

int ex17(){
    std::cout << "Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово\n"
                 "\"копейка\" в правильной форме." <<std::endl;

    std::cout << "Число в в диапазоне от 1 до 99: ";
    int n;
    std::cin >> n;

    if (n % 10 == 1){
        std::cout << n << " копейка" <<std::endl;
    }else if(2 <= n % 10 && n % 10 <= 4){
        std::cout << n << " копейки" <<std::endl;
    } else if (5 <= n % 10 && n % 10 <=20 || n % 10 == 0){
        std::cout << n << " копеек" <<std::endl;
    }
    return 0;
}