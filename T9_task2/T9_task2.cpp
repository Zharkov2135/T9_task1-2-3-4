#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double R, r;
    cout << "Vvedit zovnishnii radius R: ";
    cin >> R;
    cout << "Vvedit vnutrishnii radius r: ";
    cin >> r;

    if (R <= 0 || r < 0) {
        cout << "Pomylka: R > 0, r >= 0.\n";
        return 0;
    }
    if (r > R) {
        cout << "Pomylka: r ne mozhe buty bilshym za R.\n";
        return 0;
    }

    const double PI = acos(-1.0);
    double S = PI * (R * R - r * r);

    cout << fixed << setprecision(6);
    cout << "Ploshcha kiltsia S = " << S << "\n";
    return 0;
}
