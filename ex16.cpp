//
// Created by Anastasia Chichagova on 10.11.2022.
//
#include "Headers/ex16.h"
#include <iostream>
#include "Headers/sum_of_dig.h"

int sum_3_2(int n){
    n %= 1000;
    return sum_of_dig(n);
};

int sum_3_1(int n){
    n /= 1000;
    return sum_of_dig(n);
};

int ex16(){
    std::cout << "Определить, является ли шестизначное число \"счастливым\"" <<std::endl;
    int n;
    std::cout << "Введите шестизначное число: ";
    std::cin >> n;

    if (sum_3_1(n) == sum_3_2(n)){
        std::cout << "Счастливое" << std::endl;
    }else{
        std::cout << "Несчастливое" << std::endl;
    }
    return 0;
}
