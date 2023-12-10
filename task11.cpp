#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Запит користувача про магнітуду землетрусу
    double magnitude;
    cout << "Введіть магнітуду землетрусу за шкалою Ріхтера: ";
    cin >> magnitude;

    // Визначення характеристики землетрусу за шкалою Ріхтера
    if (magnitude < 5) {
        cout << "Характеристика: Легке, немає руйнувань\n";
    }
    else if (magnitude >= 5 && magnitude < 5.5) {
        cout << "Характеристика: Середнє, невеликі руйнування\n";
    }
    else if (magnitude >= 5.5 && magnitude < 6.5) {
        cout << "Характеристика: Серйозне, руйнування та пошкодження стін\n";
    }
    else if (magnitude >= 6.5 && magnitude < 7.5) {
        cout << "Характеристика: Лихо, багато будинків та будівель пошкоджено\n";
    }
    else if (magnitude >= 7.5) {
        cout << "Характеристика: Катастрофа, більшість будинків та будівель зруйновано\n";
    }
    else {
        cout << "Невірний ввід. Будь ласка, введіть коректну магнітуду землетрусу.\n";
    }

    return 0;
}