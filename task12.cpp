#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Запит користувача про потужність лампочки
    int power;
    cout << "Введіть потужність лампочки у ваттах: ";
    cin >> power;

    // Визначення терміну служби лампочки
    int lifespan;
    if (power >= 25 && power <= 39) {
        lifespan = 2500;
    }
    else if (power >= 40 && power < 60) {
        lifespan = 1000;
    }
    else if ((power >= 60 && power < 75) || (power >= 150 && power < 200)) {
        lifespan = 750;
    }
    else if (power >= 75 && power < 150) {
        lifespan = 500;
    }
    else {
        cout << "Лампочка не входить в жоден діапазон потужності.\n";
        return 1;
    }

    // Виведення терміну служби лампочки
    cout << "Термін служби лампочки для потужності " << power << " Вт: " << lifespan << " годин.\n";

    return 0;
}
