#include <iostream>
#include <limits>
using namespace std;

float input(string placeholder, float min, float max)
{
    float n;

    while (true) {
        cout << placeholder;
        cin >> n;

        if (cin.fail() || cin.peek() != '\n' || n < min || n > max)
        {
            cerr << "Ошибка ввода данных\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return n;
        }
    }
}

int main()
{
    float initialAmplitude, finalAmplitude, count;
    float attenuation = 8.4;

    initialAmplitude = input("Введите начальную амплитуду: ", 0, 1);
    finalAmplitude = input("Введите амплитуду остановки: ", 0, 1);

    for (count=0; initialAmplitude > finalAmplitude; count++) {
        initialAmplitude -= initialAmplitude * (attenuation / 100);
    }

    cout << "Маятник считается остановившимся через " << count << " колебаний";

    return 0;
}