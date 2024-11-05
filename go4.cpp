#include <iostream>
using namespace std;

int add(int a, int b, int c, int d);

void kalkulator(int a, int b, int c, int d);
int main(){
    int num1, num2, num3, num4;
    cout << "masukkan angka: ";
    cin >> num1;
    cout << "masukkan angka: ";
    cin >> num2;
    cout << "masukkan angka: ";
    cin >> num3;
    cout << "masukkan angka: ";
    cin >> num4;

    kalkulator (num1, num2, num3, num4);
    return 0;
}

void kalkulator(int a, int b, int c, int d){
    int penjumlahan = a + b + c + d;
    cout << "penjumlahan: " << penjumlahan << endl;

    int pengurangan = a - b - c - d;
    cout << "pengurangan: " << pengurangan << endl;

    int perkalian = a * b * c * d;
    cout << "perkalian: " << perkalian << endl;

    int pembagian = a / b / c / d;
    cout << "pembagian: " << pembagian << endl;

}
