#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, word;
    int numberRepetitions = 0, length;

    cout << "Введите текст:" << endl << "> ";
    getline(cin, text);
    cout << "Введите слово:" << endl << "> ";
    cin >> word;

    length = text.length() - word.length() + 1;
    for (int i=0; i < length; i++) {
        for (int j=0; j<word.length(); j++) {
            if (word[j] != text[j+i]) break;
            if (j == word.length() - 1) numberRepetitions++;
        }
    }

    cout << "Количество повторов: " << numberRepetitions << endl;
}