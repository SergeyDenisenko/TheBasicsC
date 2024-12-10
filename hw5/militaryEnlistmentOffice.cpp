#include <iostream>

using namespace std;

int main() {
    int weight, height, numberOfHandsCandidate, numberOfLegsCandidate, hoursExperience;
    string eyeColor;

    int minHeight = 145;
    int maxHeight = 165;
    int minWeight = 45; 
    int maxWeight = 65; 
    int numberOfHands = 2;
    int numberOfLegs = numberOfHands;
    int minTime = 100;
    string excludedEyeColor = "зеленые";

    cout << "Введите вес и рост через пробел: ";
    cin >> weight >> height;
    cout << "Введите число рук и ног: ";
    cin >> numberOfHandsCandidate >> numberOfLegsCandidate;
    cout << "Введите количество налетавших часов: ";
    cin >> hoursExperience;
    cout << "Введите цвет глаз: ";
    cin >> eyeColor;

    if (
        (weight >= minWeight && weight <= maxWeight) &&
        (height >= minHeight && height <= maxHeight) &&
        (numberOfHandsCandidate == numberOfLegsCandidate && numberOfHandsCandidate >= numberOfHands) &&
        (hoursExperience >= minTime) &&
        (eyeColor != excludedEyeColor)
        ) {
        cout << "Кандидат подходит!";
    } else {
        cout << "Кандидат не подходит!";
    }

    return 0;
}