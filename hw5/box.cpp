#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int m, n, k;
    string message = "Вы не можете поместить одну коробку внутрь другой";

    cout << "Введите размеры первой коробки (ш г в): ";
    cin >> a >> b >> c;
    cout << "Введите размеры второй коробки (ш г в): ";
    cin >> m >> n >> k;

    if ((a * b * c) > (m * n * k)) {
        if (
            (a > m && b > n && c > k) ||
            (b > m && c > n && a > k) ||
            (c > m && a > n && b > k)
        ) {
            message = "Вторая коробка помещается в первую.";
        }
    } else {
        if (
            (a < m && b < n && c < k) ||
            (b < m && c < n && a < k) ||
            (c < m && a < n && b < k)
        ) {
            message =  "Первая коробка помещается во вторую.";
        }
    }
    cout << message;

    return 0;
}