//
// Created by Anastasia Chichagova on 10.11.2022.
//

#include "Headers/ex18.h"
#include <iostream>

int reverse (int n){
    int r = 0;
    while(n){
        r = r*10 + n%10;
        n /= 10;
    }
    return r;
}

int ex18(){
    std::cout << "Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом." <<std::endl;
    std::cout << "Введите натуральное четырехзначное число: ";
    int x;
    std::cin >> x;

    if (x == reverse(x)){
        std::cout << "Палиндром" <<std::endl;
    }else{
        std::cout << "Не палиндром" <<std::endl;
    }
    return 0;
}
