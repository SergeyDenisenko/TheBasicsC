#include <iostream>

using namespace std;

int main() {
    int bacteria, antibiotic;
    int effectivenessAntibiotic = 10;
    int bacterialReproductionRate = 2;

    cout << "Введите количество бактерий: ";
    cin >> bacteria;
    cout << "Введите количество антибиотика: ";
    cin >> antibiotic;

    for (int i=1; bacteria > 0 && effectivenessAntibiotic > 0; i++) {
        bacteria *= bacterialReproductionRate;
        bacteria -= antibiotic * effectivenessAntibiotic;
        effectivenessAntibiotic--;

        if (bacteria < 0) bacteria = 0;
        cout << "После " << i << " часа бактерий осталось " << bacteria << endl;
    }

    return 0;
}