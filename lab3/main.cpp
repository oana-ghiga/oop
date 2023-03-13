//
// Created by oana_ on 3/13/2023.
//
#include "Sort.h"
#include <iostream>

int main() {
    std::Sort s1{3, 5, 79};
    std::cout << "s1: ";
    s1.Print();

    std::initializer_list<int> l{11, 3, 9, 5, 1, 13, 73, 99};
    std::Sort s2{l};
    std::cout << "s2: ";
    s2.Print();

    std::vector<int> v{3, 7, 9, 5, 1, 11, 69, 37};
    std::Sort s3(v);
    std::cout << "s3: ";
    s3.Print();

    std::Sort s4(5, 1, 10);
    std::cout << "s4: ";
    s4.Print();

    std::Sort s5("10,40,100,5,70");
    std::cout << "s5: ";
    s5.Print();

    std::Sort s6(7, 1, 2, 3, 4, 5, 6, 7);
    std::cout << "s6: ";
    s6.Print();

    s6.InsertSort(false);
    std::cout << "s6 InsertSort(d): ";
    s6.Print();

    s1.InsertSort();
    std::cout << "s1 InsertSort: ";
    s1.Print();

    s5.QuickSort(true);
    std::cout << "s5 QuickSort(a): ";
    s5.Print();

    s2.QuickSort();
    std::cout << "s2 QuickSort: ";
    s2.Print();

    s3.BubbleSort(true);
    std::cout << "s3 BubbleSort(a): ";
    s3.Print();


    s4.BubbleSort(false);
    std::cout << "s4 BubbleSort(d): ";
    s4.Print();



    std::cout << "Element at index 2 of s2: " << s2.GetElementFromIndex(2) << std::endl;
    std::cout << "Number of elements in s3: " << s3.GetElementsCount() << std::endl;

    return 0;
}