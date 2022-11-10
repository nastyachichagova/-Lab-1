//
// Created by Anastasia Chichagova on 09.11.2022.
//
#include "Headers/ex8.h"
#include <iostream>
#include <cmath>

//длина медианы к стороне c
float median(float a, float b, float c){
    return 0.5 * sqrt(2*pow(a, 2) + 2*pow(b, 2) - pow(c, 2));
}

int ex8(){
    std::cout << "Имеется треугольник со сторонами а, b, с. Найти медианы треугольника, сторонами которого\n"
                 "являются медианы исходного треугольника" << std::endl;
    std::cout << "Введите стороны треугольника: " << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;

    //треугольник efg образован медианами треугольника abc
    float e, f, g;
    e = median(a, b, c);
    f = median(a, c, b);
    g = median(b, c, a);

    //m_i - медиана к стороне i
    float m_e, m_f, m_g;
    m_e = median(f, g, e);
    m_f = median(e, g, f);
    m_g = median(e, f, g);

    std::cout << "Медиана 1 = " << m_e << std::endl;
    std::cout << "Медиана 2 = " << m_f << std::endl;
    std::cout << "Медиана 3 = " << m_g << std::endl;

    return 0;
};
