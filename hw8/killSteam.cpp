#include <cmath>
#include <iostream>
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
    float sizeFile, speed, downloaded;

    sizeFile = input("Укажите размер файла для скачивания: ");
    speed = input("Какова скорость вашего соединения? ");

    for (int i=0; downloaded < sizeFile; i++) {
        if (sizeFile - downloaded < speed) downloaded += sizeFile - downloaded;
        else downloaded += speed;

        cout << "Прошло " << i << " сек. ";
        cout << "Скачано " << downloaded << " из " << sizeFile << " МБ ";
        cout << "(" << floor(downloaded / sizeFile * 100) << "%)." << endl;
    }

    return 0;
}