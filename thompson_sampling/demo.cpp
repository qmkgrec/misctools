#include <iostream>
#include "beta_distribution.h"

double static beta_sample(double win, double lose)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    sftrabbit::beta_distribution<> beta(win, lose);
    return beta(gen);
}

int main()
{
    std::cout << beta_sample(1.1, 2.2) << std::endl;
    return 0;
}

