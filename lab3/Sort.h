//
// Created by oana_ on 3/13/2023.
//
#pragma once
#include <vector>
#include <string>
#ifndef OOP_SORT_H
#define OOP_SORT_H


namespace std {

    class Sort {
    public:
        Sort();
        Sort(std::initializer_list<int> values);
        Sort(const std::vector<int>& values);
        Sort(int n, int min, int max);
        Sort(const std::string& values);
        Sort(int count, ...);

        void InsertSort(bool ascendent = false);
        void QuickSort(bool ascendent = false);
        void BubbleSort(bool ascendent = false);
        void Print() const;
        int GetElementsCount() const;
        int GetElementFromIndex(int index) const;

    private:
        std::vector<int> elements;

        void swap(int& a, int& b);
        int partition(int low, int high, bool ascendent);
        void quicksort(int low, int high, bool ascendent);
    };

} // std

#endif //OOP_SORT_H
