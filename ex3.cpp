//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex3.h"
#include <iostream>
#include <cmath>

//площадь прямоугольного треугольника с катетами a, b
int rectangle_sq(int a, int b){
    return 0.5*a*b;
};
//гипотенуза прямоугольного треугольника с катетами a, b
float hypotenuse(int a, int b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

int ex3(){
    std::cout << "Вычислить площадь прямоугольного треугольника и гипотенузу." << std::endl;
    int a, b;
    std::cout << "Введите длины катетов: " << std::endl;
    std::cin >> a >> b;
    std::cout << "S = " << rectangle_sq(a, b) << std::endl;
    std::cout << "c = " << hypotenuse(a, b) << std::endl;
    return 0;
}
