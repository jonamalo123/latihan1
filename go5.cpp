#include <iostream>
#include <iomanip>
using namespace std;

// Fungsi untuk memeriksa apakah bilangan adalah bilangan prima
bool isPrima(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // Bilangan desimal
    double angkaDesimal = 5.75;
    cout << "Bilangan Desimal: " << fixed << setprecision(2) << angkaDesimal << endl;

    // Menghitung kuadrat
    double kuadrat = angkaDesimal * angkaDesimal;
    cout << "Kuadrat dari " << angkaDesimal << " adalah: " << kuadrat << endl;

    // Memeriksa bilangan prima
    int bilangan;
    cout << "Masukkan bilangan bulat untuk diperiksa apakah prima: ";
    cin >> bilangan;

    if (isPrima(bilangan)) {
        cout << bilangan << " adalah bilangan prima." << endl;
    } else {
        cout << bilangan << " bukan bilangan prima." << endl;
    }

    return 0;
}

