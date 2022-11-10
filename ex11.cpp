//
// Created by Anastasia Chichagova on 09.11.2022.
//

#include "Headers/ex11.h"
#include <iostream>
#include <cmath>

int ex11(){
    std::cout << "Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма\n"
                 "покупки превышает 1000 рублей." << std::endl;
    int k; //стоимость покупки
    std::cout << "Введите стоимость покупки: ";
    std::cin >> k;
    if (k > 1000) {
        std::cout << "Скидка 10% действует" << std::endl;
        std::cout << "Стоимость покупки " << 0.9*k << std::endl;
    }else{
        std::cout << "Скидка 10% не действует" << std::endl;
        std::cout << "Стоимость покупки " << k << std::endl;
    }
    return 0;
}
