#include <iostream>

using namespace std;

int main() {
    int vize, final;
    float ortalama;
    
    cout << "Vize notunu giriniz : ";
    cin >> vize;
    
    cout << "Final notunu giriniz : ";
    cin >> final;

    ortalama = (vize*0.40) + (final*0.60);
    
    cout << "\nOrtalamaniz : " << ortalama << endl;
    
    if (vize > 100 || final > 100) {
        cout << "Vize veya Final notu 100'den fazla olamaz !!";
    } else if (ortalama <= 100 && ortalama >= 90) {
        cout << "Harf Notu : AA";
    } else if (ortalama < 90 && ortalama >= 85) {
        cout << "Harf Notu : BA";
    } else if (ortalama < 85 && ortalama >= 80) {
        cout << "Harf Notu : BB";
    } else if (ortalama < 80 && ortalama >= 70) {
        cout << "Harf Notu : CB";
    } else if (ortalama < 70 && ortalama >= 60) {
        cout << "Harf Notu : CC";
    } else if (ortalama < 60 && ortalama >= 55) {
        cout << "Harf Notu : DC";
    } else if (ortalama < 55 && ortalama >= 50) {
        cout << "Harf Notu : DD";
    } else if (ortalama < 50 && ortalama >= 40) {
        cout << "Harf Notu : FD";
    } else if (ortalama > 0 && ortalama < 40) {
        cout << "Harf Notu : FF";
    }

    return 0;
}