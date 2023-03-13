//
// Created by oana_ on 3/13/2023.
//

#include "Sort.h"
#include <algorithm>
#include <iostream>
#include <sstream>
#include <stdarg.h>

namespace std {
    Sort::Sort() {}

    Sort::Sort(std::initializer_list<int> values)
            : elements(values) {}

    Sort::Sort(const std::vector<int>& values)
            : elements(values) {}

    Sort::Sort(int n, int min, int max)
    {
        for (int i = 0; i < n; ++i)
            elements.push_back(rand() % (max - min + 1) + min);
    }

    Sort::Sort(const std::string& values)
    {
        std::istringstream iss(values);
        std::string token;
        while (std::getline(iss, token, ','))
            elements.push_back(std::stoi(token));
    }

    Sort::Sort(int count, ...)
    {
        va_list args;
        va_start(args, count);
        for (int i = 0; i < count; ++i)
            elements.push_back(va_arg(args, int));
        va_end(args);
    }

    void Sort::InsertSort(bool ascendent)
    {
        int n = elements.size();
        for (int i = 1; i < n; ++i) {
            int j = i - 1;
            int tmp = elements[i];
            while (j >= 0 && ((ascendent && elements[j] > tmp) || (!ascendent && elements[j] < tmp))) {
                elements[j + 1] = elements[j];
                --j;
            }
            elements[j + 1] = tmp;
        }
    }

    int Sort::partition(int low, int high, bool ascendent)
    {
        int pivot = elements[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) {
            if ((ascendent && elements[j] <= pivot) || (!ascendent && elements[j] >= pivot)) {
                i++;
                swap(elements[i], elements[j]);
            }
        }
        swap(elements[i + 1], elements[high]);
        return i + 1;
    }

    void Sort::quicksort(int low, int high, bool ascendent)
    {
        if (low < high) {
            int pi = partition(low, high, ascendent);
            quicksort(low, pi - 1, ascendent);
            quicksort(pi + 1, high, ascendent);
        }
    }

    void Sort::QuickSort(bool ascendent)
    {
        int n = elements.size();
        quicksort(0, n - 1, ascendent);
    }

    void Sort::BubbleSort(bool ascendent)
    {
        int n = elements.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j =i + 1; j < n; ++j) {
                if ((ascendent && elements[i] > elements[j]) || (!ascendent && elements[i] < elements[j]))
                    swap(elements[i], elements[j]);
            }
        }
    }

    void Sort::Print() const
    {
        int n = elements.size();
        for (int i = 0; i < n; ++i)
            std::cout << elements[i] << " ";
        std::cout << std::endl;
    }

    int Sort::GetElementsCount() const
    {
        return elements.size();
    }

    int Sort::GetElementFromIndex(int index) const
    {
        return elements[index];
    }

    void Sort::swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
} // std