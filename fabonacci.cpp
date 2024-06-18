#include <iostream>

// 使用迭代方法計算斐波那契數列
unsigned long long fibonacciIterative(int n) {
    if (n < 0) {
        throw std::invalid_argument("The Fibonacci sequence is not defined for negative numbers.");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long fib = 1;

    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

/*int main() {
    int number = 10;
    try {
        unsigned long long result = fibonacciIterative(number);
        std::cout << "Fibonacci number " << number << " is " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
*/
