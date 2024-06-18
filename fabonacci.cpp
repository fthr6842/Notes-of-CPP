#include <iostream>

unsigned long long fibonacciRecursive(int n) {
    return n <= 1 ? n : fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int number = 10;
    std::cout << "Fibonacci number " << number << " is " << fibonacciRecursive(number) << std::endl;
    return 0;
}
