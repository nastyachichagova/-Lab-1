//
// Created by Anastasia Chichagova on 10.11.2022.
//

#include "Headers/ex20.h"
#include <iostream>

int ex20(){
    std::cout << "Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со\n"
                 "сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного\n"
                 "прямоугольника были параллельны сторонам другого." <<std::endl;
    std::cout << "Введите вещественные положительные числа a, b, c, d" << std::endl;
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a < c && b < d){
        std::cout << "Можно" <<std::endl;
    }else{
        std::cout << "Нельзя" <<std::endl;
    }
    return 0;
}