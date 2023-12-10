#include <iostream>

int main() {
    int i = 100;
    do {
        std::cout << i << " ";
        i += 2;
    } while (i <= 200);

    return 0;
}
