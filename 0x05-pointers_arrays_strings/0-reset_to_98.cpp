#include <iostream>

void reset_to_98(int *n)
{
    *n = 98;
}

int main() {
    int n = 402;
    std::cout << n << std::endl;
    reset_to_98(&n);
    std::cout << n << std::endl;
    return 0;
}

