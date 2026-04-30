#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Vvedit dvotsyfrovoe chyslo: ";
    cin >> n;

    int absn = (n < 0) ? -n : n;
    if (absn < 10 || absn > 99) {
        cout << "Pomylka: potribno vvesty dvotsyfrovoe chyslo (10..99 abo -10..-99).\n";
        return 0;
    }

    int tens = absn / 10;
    int ones = absn % 10;

    cout << "Kilkist desiatkiv = " << tens << "\n";
    cout << "Kilkist odynyts = " << ones << "\n";
    cout << "Suma tsyfr = " << (tens + ones) << "\n";
    cout << "Dobutok tsyfr = " << (tens * ones) << "\n";
    return 0;
}
