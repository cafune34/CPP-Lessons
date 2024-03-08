#include <iostream>

using namespace std;

int main() {
    int sayi;
    
    cout << "bir sayi giriniz : ";
    cin >> sayi;
    
    if (sayi%2 == 0 && sayi != 0) {
        cout << "sayi cift sayidir";
    } else if (sayi%2 == 1) {
        cout << "sayi tek sayidir";
    } else {
        cout << "sayi 0'dir."; // 0 teoride çift sayıdır.
    }

    return 0;
}