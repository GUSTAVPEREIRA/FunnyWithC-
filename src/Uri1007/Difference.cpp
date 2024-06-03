#include <iostream>
#include "Difference.h"


Difference::Difference(int a, int b, int c, int d) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

int Difference::checkDifferenceOfProduct() const {
    return a * b - c * d;
}

void Difference::printResult() const {
    auto result = this->checkDifferenceOfProduct();
    std::cout << "DIFERENCA = " << result << std::endl;
}
