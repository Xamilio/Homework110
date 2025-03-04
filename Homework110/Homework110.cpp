#include <iostream>

using namespace std;

enum Menu {
    PLUS = 101,
    MINUS = 102,
    DIVIDE = 103,
    MULT = 104,
    EXIT = 0
};

// Функції для арифметичних операцій
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cout << "Помилка: ділення на нуль!" << endl;
        return 0;
    }
    return a / b;
}

// Функція меню
void menu() {
    int choice;
    double num1, num2;

    do {
        cout << "\nМеню: " << endl;
        cout << "101 - Додавання" << endl;
        cout << "102 - Віднімання" << endl;
        cout << "103 - Ділення" << endl;
        cout << "104 - Множення" << endl;
        cout << "0 - Вихід" << endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        if (choice == EXIT) break;

        cout << "Введіть перше число: ";
        cin >> num1;
        cout << "Введіть друге число: ";
        cin >> num2;

        switch (choice) {
        case PLUS:
            cout << "Результат: " << add(num1, num2) << endl;
            break;
        case MINUS:
            cout << "Результат: " << subtract(num1, num2) << endl;
            break;
        case DIVIDE:
            cout << "Результат: " << divide(num1, num2) << endl;
            break;
        case MULT:
            cout << "Результат: " << multiply(num1, num2) << endl;
            break;
        default:
            cout << "Невірний вибір!" << endl;
        }
    } while (choice != EXIT);

    cout << "Програма завершена." << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    menu();

}
