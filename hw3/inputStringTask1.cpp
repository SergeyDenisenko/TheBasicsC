#include <iostream>

using namespace std;

int main() {
    string name, nationality;

    cout << "Введите имя: ";
    cin >> name;
    cout << "Введите расу: ";
    cin >> nationality;
    cout << "Родился новый " << nationality << ", его зовут " << name << ". Добро пожаловать в этот суровый мир!";

    return 0;
}