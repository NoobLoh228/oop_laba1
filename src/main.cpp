#include <iostream>

int add(int lhs, int rhs);
int subtract(int lhs, int rhs);
int multiply(int lhs, int rhs);

int main() {

    int lhs = 5;
    int rhs = 3;

    std::cout << add(lhs, rhs) << "/t";
    std::cout << subtract(lhs, rhs) << "/t";
    std::cout << multiply(lhs, rhs) << "/t";

}
