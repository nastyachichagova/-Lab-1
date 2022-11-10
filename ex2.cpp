//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex2.h"
#include <iostream>
#include <cmath>

const double PI = 3.141592653589793;
//длина окружности
float circumference (float r){
    return 2 * PI * r;
}
//площадь круга
float circle_sq (float r){
    return PI * pow(r, 2);
}
int ex2() {
    std::cout << "Вычислить длину окружности (l) и площадь круга (S) радиуса г." << std::endl;

    float r;
    std::cout << "r = ";
    std::cin >> r;

    std::cout << "l = " << circumference(r) << std::endl;
    std::cout << "S = " << circle_sq(r) << std::endl;

    return 0;
}
