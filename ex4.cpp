//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex4.h"
#include <iostream>
#include "Headers/sum_of_dig.h" //сумма цифр числа

int ex4(){
    std::cout << "Дано десятичное четырехзначное число. Найти сумму его цифр." << std::endl;
    int n;
    std::cout << "Введите десятичное четырехзначное число: ";
    std::cin >> n;
    std::cout << "Сумма цифр числа = " << sum_of_dig(n) << std::endl;
    return 0;
}
