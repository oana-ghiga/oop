#include "Number.h"
#include <iostream>

int main() {
    Number a("12FAE",16);
    a.print();
    a.switchBase(10);
    a.print();
}
