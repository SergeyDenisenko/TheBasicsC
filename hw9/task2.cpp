#include <iostream>
using namespace std;

int main()
{
    string text;
    bool isRepeatedString = false;
    int half;

    cout << "Введите текст:" << endl << "> ";
    getline(cin, text);

    half = text.length() / 2;
    for (int offset=1; offset <= half; offset++) {

        // Ищем первое совпадение
        if (text[0] == text[offset]) {
            int wordCount = text.length() / offset;
            int wordLength = offset;

            if (text.length() % offset != 0) continue;

            // проверяем является ли вторым словом и последующими
            for (int i=0, count=2; i<wordLength; i++) {
                if (text[i] != text[offset+i]) break;

                // проверяем является ли буква и слово последними
                if ((i == wordLength-1) && (count == wordCount)) {
                    isRepeatedString = true;
                    break;

                // проверяем является ли буква последней в слове
                } else if (i == wordLength-1) {
                    count++;
                    offset += wordLength;
                    i=-1;
                }
            }
        }
        if (isRepeatedString) break;
    }

    if (isRepeatedString) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}