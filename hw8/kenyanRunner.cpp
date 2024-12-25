#include <cmath>
#include <iostream>
#include <string>
using namespace std;

float input(string placeholder)
{
    float n;

    while (true) {
        cout << placeholder << endl << "> ";
        cin >> n;

        if (cin.fail() || cin.peek() != '\n')
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
    float distance, time, currentTime, meanTime, minutes, seconds;

    string hello = "HI";

    distance = input("Привет, Сэм! Сколько километров ты сегодня пробежал?");

    for (int i=1; i<=distance; i++) {
        string message = "Какой у тебя был темп на километре " + to_string(i) + '?';
        currentTime = input(message);
        time += currentTime;
    }

    meanTime = time / distance;
    minutes = floor(meanTime / 60);
    seconds = round(meanTime - (minutes * 60));

    cout << "Твой средний темп за тренировку: ";
    cout << minutes << " минуты " << seconds << " секунд.";

    return 0;
}