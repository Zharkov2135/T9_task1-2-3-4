#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double S;
    cout << "Vvedit ploshchu kvadrata S: ";
    cin >> S;

    if (S <= 0) {
        cout << "Pomylka: ploshcha maie buty dodatnoiu.\n";
        return 0;
    }

    double a = sqrt(S);
    double P = 4 * a;

    cout << fixed << setprecision(6);
    cout << "Storona a = " << a << "\n";
    cout << "Perimetr P = " << P << "\n";
    return 0;
}
