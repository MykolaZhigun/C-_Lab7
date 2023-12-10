#include <iostream>

int main() {
    char choice;

    do {
        int count;
        std::cout << "Введіть кількість чисел: ";
        std::cin >> count;

        // Ініціалізація суми та добутку
        int sum = 0;
        int product = 1;

        std::cout << "Введіть " << count << " чисел(а):\n";

        for (int i = 0; i < count; ++i) {
            int number;
            std::cout << "Число " << i + 1 << ": ";
            std::cin >> number;

            // Оновлення суми та добутку
            sum += number;
            product *= number;
        }

        // Виведення результатів
        std::cout << "Сума введених чисел: " << sum << std::endl;
        std::cout << "Добуток введених чисел: " << product << std::endl;

        // Питання про продовження
        std::cout << "Продовжити (y/n)? ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
