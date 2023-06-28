#include <iostream>

int main() {
    int maxValue = -1;
    int maxPos = -1;

    for (int i = 1; i <= 100; i++) {
        int currentValue;
        std::cin >> currentValue;

        if (currentValue > maxValue) {
            maxValue = currentValue;
            maxPos = i;
        }
    }

    std::cout << maxValue << std::endl;
    std::cout << maxPos << std::endl;

    return 0;
}
