//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex5.h"
#include <iostream>
#include <cmath>
#include "Headers/polar.h"
#include "Headers/cartesian.h"

//полярные в декартовы
cartesian polar_to_cartesian(polar B){
    cartesian A;
    A.x = B.r * cos(B.fi);
    A.y = B.r * sin(B.fi);
    return A;
};

int ex5() {
    std::cout << "Выполнить переход от полярных координат к декартовым" << std::endl;
    float r, fi;
    std::cout << "Введите полярные координаты точки: "<< std::endl;
    std::cout << "r = ";
    std::cin >> r;
    std::cout << "fi = ";
    std::cin >> fi;

    polar B;
    B.r = r;
    B.fi = fi;

    cartesian A = polar_to_cartesian(B);

    std::cout << "Декартовые координаты точки: (" << A.x << ", " << A.y << ")" << std::endl;
    return 0;
}
