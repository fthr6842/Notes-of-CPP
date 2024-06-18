#include <stdio.h>
#include <iostream>

/*
1. 整數:
  a. short: 2位元組(-2^15~2^15-1)
  或是short int
  b. int: 4位元組(-2^31~2^31-1)
  c. long: 4、8位元組(-2^31~2^31-1)
  或是long int
  d. long long: 8位元組(-2^63~2^63-1)
  或是long long int
*/

int main(void)
{
    short a = 1;

    int b = 2;
    
    long c = 3;
    
    long long d = 4;

    system("pause");
    return 0;
}