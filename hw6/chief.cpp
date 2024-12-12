#include <iostream>
#include <string>

using namespace std;

int main() {
    string userAnswer;
    string rightAnswer = "Да, конечно, сделал";

    do {
        cout << "Выполнил задания которые я выдавал вчера?" << endl << "> ";
        getline(cin, userAnswer);
    } while (userAnswer != rightAnswer);

    return 0;
}