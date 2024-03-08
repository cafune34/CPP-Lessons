#include <iostream>
#include <string>

using namespace std;

int main() {
    float boy;
    string isim, soyisim, dogumtarihi;
    
    cout << "isim giriniz\n";
    cin >> isim;
    cout << "soyisim giriniz\n";
    cin >> soyisim;
    cout << "boy (m) giriniz\n";
    cin >> boy;
    cout << "dogum tarihi (gg.aa.yyyy) giriniz \n";
    cin >> dogumtarihi;
    
    cout << "\nisim : " << isim << endl;
    cout << "soyisim : " << soyisim << endl;
    cout << "boy : " << boy << endl;
    cout << "dogum tarihi : " << dogumtarihi;
    
    return 0;
}