#include <iostream>
#include <string>

using namespace std;

void addDigitRight(long long k, int d, long long& result){
}

void addDidigtLeft(long long k, int d, long long& result){
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
        string kStr = to_string(k);
    string dStr = to_string(d);
    string resultStr = dStr + kStr;
    try {
        result = stoll(resultStr);
    } catch (const std::out_of_range& oor) {
        cerr << "Ошибка: Результат слишком большой. Возвращаю 0." << endl;
        result = 0;
    }
    } while (choice != 0);
    return 0;
}