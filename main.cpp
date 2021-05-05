//
// Created by annas on 05.05.2021.
//
//Реализовать двоичный поиск на отсортированном по неубыванию массиве.
#include <iostream>
#include <algorithm>

int main() {
    int start = 0;
    int weight;
    int element;
    std::cout << "введите количество чисел в массиве" << std::endl;
    std::cin >> weight;
    int array[weight];
    std::cout << "введите сам массив" << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
    }

    std::cout << "введите то, что искать нужно" << std::endl;
    std::cin >> element;

    std::sort (array, array + weight);

    int key = -1;

    while (start <= weight) {
        int middle = (start + weight)/2;
        if (array[middle] == element) {
            key = middle;
            break;
        } else if (array[middle] > element) {
            start = middle - 1;
        } else if (array[middle] < element) {
            weight = middle + 1;
        }


    }
    if (key != -1) {
        std::cout << key;
    } else {
        std::cout << "нет его";
    }

    return key;

};
