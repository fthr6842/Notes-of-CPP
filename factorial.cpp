#include <iostream>

// 使用遞歸方法計算階乘
unsigned long long factorialRecursive(int n) {
    if (n < 0) {
        throw std::invalid_argument("Negative numbers do not have a factorial.");
    }
    return (n == 0 || n == 1) ? 1 : n * factorialRecursive(n - 1);
}

int main() {
    int number = 5;
    try {
        unsigned long long result = factorialRecursive(number);
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
