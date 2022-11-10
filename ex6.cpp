//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex6.h"
#include <iostream>
#include <cmath>
#include "Headers/polar.h"
#include "Headers/cartesian.h"

//декартовы в полярные
polar cartesian_to_polar(cartesian A){
    polar B;
    B.r = sqrt(pow(A.x, 2) + pow(A.y, 2));
    B.fi = atan(A.y / A.x);
    return B;
};


int ex6() {
    std::cout << "Выполнить переход от декартовых координат к полярным." << std::endl;
    float x, y;
    std::cout << "Введите декартовые координаты точки: " << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    cartesian A;
    A.x = x;
    A.y = y;

    polar B = cartesian_to_polar(A);

    std::cout << "Полярные координаты точки: (" << B.r << ", " << B.fi << ")" << std::endl;
    return 0;
}