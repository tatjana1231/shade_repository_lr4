#include <iostream>
#include <string>

using namespace std;

void addDigitRight(long long k, int d, long long& result){
    result = k * 10 + d;
}

void addDigitLeft(long long k, int d, long long& result){
    string kStr = to_string(k);
    string dStr = to_string(d);
    string resultStr = dStr + kStr;
    try {
        result = stoll(resultStr);
    } catch (const std::out_of_range& oor) {
        cerr << "Ошибка: Результат слишком большой. Возвращаю 0." << endl;
        result = 0;
    }
}

int main() {
    long long k = 0;
    int d = 0;
    bool kEntered = false;
    bool dEntered = false;
    long long result; // Добавляем переменную result здесь

    int choice;

    do {
        cout << "\nМеню:" << endl;
        cout << "1. Ввести натуральное число K" << endl;
        cout << "2. Ввести цифру D (в диапазоне 1-9)" << endl;
        cout << "3. Добавить к числу K справа цифру D" << endl;
        cout << "4. Добавить к числу K слева цифру D" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;
<<<<<<< HEAD
        switch (choice) {
            case 1: {
                cout << "Введите натуральное число K: ";
                cin >> k;
                if (k <= 0) {
                    cout << "Ошибка: K должно быть натуральным числом (больше 0)." << endl;
                    k = 0;
                    kEntered = false;
                } else {
                    kEntered = true;
                }
                break;
            }
            case 2: {
                cout << "Введите цифру D (в диапазоне 1-9): ";
                cin >> d;
                if (d < 1 || d > 9) {
                    cout << "Ошибка: D должно быть цифрой от 1 до 9." << endl;
                    d = 0;
                    dEntered = false;
                } else {
                    dEntered = true;
                }
                break;
            }
            case 3: {
                if (!kEntered || !dEntered) {
                    cout << "Ошибка: Сначала необходимо ввести число K и цифру D." << endl;
                } else {
                    addDigitRight(k, d, result); // Передаем result по ссылке
                    cout << "Результат добавления цифры " << d << " справа к числу " << k << " равен: " << result << endl;
                }
                break;
            }
            case 4: {
                if (!kEntered || !dEntered) {
                    cout << "Ошибка: Сначала необходимо ввести число K и цифру D." << endl;
                } else {
                    addDigitLeft(k, d, result); // Передаем result по ссылке
                    cout << "Результат добавления цифры " << d << " слева к числу " << k << " равен: " << result << endl;
                }
                break;
            }
            case 0: {
                cout << "Выход из программы." << endl;
                break;
            }
            default: {
                cout << "Ошибка: Неверный выбор. Пожалуйста, выберите действие из меню." << endl;
            }
            }
=======
        string kStr = to_string(k);
    string dStr = to_string(d);
    string resultStr = dStr + kStr;
    try {
        result = stoll(resultStr);
    } catch (const std::out_of_range& oor) {
        cerr << "Ошибка: Результат слишком большой. Возвращаю 0." << endl;
        result = 0;
    }
>>>>>>> b4b805d5fd781a3552437b62e204592c67b54095
    } while (choice != 0);
    return 0;
}