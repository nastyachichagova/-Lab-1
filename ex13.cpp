//
// Created by Anastasia Chichagova on 10.11.2022.
//

#include "Headers/ex13.h"
#include <iostream>
#include <cmath>
#include <ctime>

int ex13() {
    std::cout << "Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат\n"
                 "произведения этих чисел. Программа сообщает тестируемому ошибся он или нет." << std::endl;

    srand(time(NULL));

    //генерируем 2 числа от 1 до 9 каждое
    int r1 = rand() % 9 + 1;
    int r2 = rand() % 9 + 1;
    int m;

    std::cout << "Введите результат произведения чисел: ";
    std::cin >> m;

    if (m == r1*r2){
        std::cout << "Верно " << r1 << " * " << r2 << " = " << m << std::endl;
    }else{
        std::cout << "Ошибка " << r1 << " * " << r2 << " ≠ " << m << std::endl;
    }

    /*std::cout<< "1) " << r1 << std::endl;
    std::cout<< "2) " << r2 << std::endl;*/

    return 0;
}
