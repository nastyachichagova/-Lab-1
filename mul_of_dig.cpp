//
// Created by Anastasia Chichagova on 10.11.2022.
//

#include "Headers/mul_of_dig.h"

//произведение цифр числа
int mul_of_dig (int n){
    int mul = 1;
    while (n){
        mul *= n%10;
        n /= 10;
    }
    return mul;
}