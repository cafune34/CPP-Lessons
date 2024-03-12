#include <iostream>
using namespace std;

int main() {
    int islem;
    float x, y;
    
    forx:
        cout << "Birinci Degeri Giriniz: ";
        cin >> x;
    
        if (0 > x || x > 100) {
            cout << "Girdiginiz Deger 0 ile 100 Arasinda Olmasi Gerekiyor\n";
            goto forx;
        }
        
    fory:
        cout << "Ikinci Degeri Giriniz: ";
        cin >> y;
    
        if (0 > y || y > 100) {
            cout << "Girdiginiz Deger 0 ile 100 Arasinda Olmasi Gerekiyor\n";
            goto fory;
        }
    
    forislem:
        cout << "Yapmak Istediginiz Islem:\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\nIslemi Giriniz: ";
        cin >> islem;
        
        switch(islem) {
            case 1:
            cout << "Sonucunuz: " << x+y;
            break;
            
            case 2:
            cout << "Sonucunuz: " << x-y;
            break;
            
            case 3:
            cout << "Sonucunuz: " << x*y;
            break;
            
            case 4:
            cout << "Sonucunuz: " << x/y;
            break;
            
            default:
            cout << "Yapmak Istediginiz İslem Turu Bulunamadi";
            goto forislem;
        }

    return 0;
}