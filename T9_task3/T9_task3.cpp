#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cout << "Vvedit katet a: ";
    cin >> a;
    cout << "Vvedit katet b: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Pomylka: katety maiut buty dodatni. Trykutnyk ne isnue.\n";
        return 0;
    }

    // Priamokutnyi trykutnyk z dodatnymy katetamy isnue
    double c = sqrt(a * a + b * b);
    double P = a + b + c;

    cout << fixed << setprecision(6);
    cout << "Hipotenusa c = " << c << "\n";
    cout << "Perimetr P = " << P << "\n";
    cout << "Vysnovok: priamokutnyi trykutnyk isnue.\n";
    return 0;
}
