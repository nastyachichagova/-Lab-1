//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex7.h"
#include <iostream>
#include <cmath>

//дискриминант
float discriminant(int a, int b, int c){
    return pow(b, 2) - 4*a*c;
}

int ex7(){
    std::cout << "Найти корни квадратного уравнения." << std::endl;

    int a, b, c;
    std::cout << "Введите коэффиенты: " << std::endl;
    std::cin >> a >> b >> c;

    float D = discriminant(a, b, c);
    if (D < 0){
        std::cout << "Нет корней" << std::endl;
    } else if (D == 0){
        std::cout << "1 корень: " << (-b + sqrt(D))/2*a << std::endl;
    }else{
        std::cout << "2 корня: " << (-b + sqrt(D))/2*a << ", " << (-b - sqrt(D))/2*a << std::endl;
    }

    return 0;
};
