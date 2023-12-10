#include <iostream>

int main() {
    const int lowerLimit = 1;
    const int upperLimit = 100;

    int userNumber;

    do {
        std::cout << "Введіть число від " << lowerLimit << " до " << upperLimit << ": ";
        std::cin >> userNumber;

        if (userNumber < lowerLimit || userNumber > upperLimit) {
            std::cout << "Число не знаходиться в межах діапазону. Спробуйте ще раз.\n";
        }
    } while (userNumber < lowerLimit || userNumber > upperLimit);

    std::cout << "Введене число в межах діапазону: " << userNumber << std::endl;

    return 0;
}
