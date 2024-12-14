#include <iostream>

using namespace std;

int main() {
    int count = 0;
    string userAnswer;
    string rightAnswer = "Да, конечно, сделал";

    for (; userAnswer != rightAnswer ; count++) {
        cout << "Выполнил задания которые я выдавал вчера?" << endl << "> ";
        getline(cin, userAnswer);
    }

    cout << "Ну почему тебя нужно спрашивать " << count << " раз?";

    return 0;
}