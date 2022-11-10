//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex10.h"
#include <iostream>
#include <cmath>

int ex10(){
    std::cout << "Определить, является ли треугольник со сторонами a, b, c равнобедренным." << std::endl;
    std::cout << "Введите стороны треугольника: " << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == b || a == c || b == c){
        std::cout << "Треугольник равнобедренный" << std::endl;
    }else{
        std::cout << "Треугольник не равнобедренный" << std::endl;
    }
    return 0;
}
