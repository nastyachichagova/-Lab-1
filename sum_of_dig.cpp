//
// Created by Anastasia Chichagova on 10.11.2022.
//
#include "Headers/sum_of_dig.h"

//сумма цифр числа
int sum_of_dig (int n){
    int sum = 0;
    while (n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
