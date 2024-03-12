#include <iostream>
using namespace std;

int main() {
    int deger;
    
    tekrarsor:
        cout << "Plaka Kodunuz Nedir:" << endl;
        cin >> deger;
    
        if (1 > deger || deger > 81) {
            cout << "Girdiginiz Deger 1 ile 81 Arasinda Olmasi Gerekiyor\n";
            goto tekrarsor;
        }
    
    switch(deger) {
        case 34:
        cout << "Istanbul";
        break;
        
        case 59:
        cout << "Tekirdag";
        break;
        
        default:
        cout << "Plaka Kodu Bulunamadi";
    }

    return 0;
}