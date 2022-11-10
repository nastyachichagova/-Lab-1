//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex1.h"
#include <iostream>

//функция вычисляет площадь трапеции
float trapezoid_sq (float a, float b, float h){
    return 0.5*(a+b)*h;
}
int ex1(){
    std::cout << "Вычислить площадь трапеции с основаниями b1 и b2 и высотой h" << std::endl;

    float b1, b2, h;
    std::cout << "b1 = ";
    std::cin >> b1;
    std::cout << "b2 = ";
    std::cin>> b2;
    std::cout << "h = ";
    std::cin >> h;
    float sq = trapezoid_sq(b1, b2, h);
    std::cout << "S = " << sq << std::endl;
    return 0;
}
