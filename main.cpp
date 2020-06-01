#include <iostream>
#include <math.h>

using namespace std;

static int counter;
static int c = 1;
void print(int);

void islem() {
    int sayi[100];
    int rakam[100], toplam[100];
    for(int i=0; i < counter; i++) {
        cin >> sayi[i];
        while(sayi[i] > 0) {
            rakam[i] = sayi[i] % 10;
            toplam[i] += rakam[i];
            sayi[i] = sayi[i] / 10;
        }
    }
    for(int k=0; k < counter; k++) {
        print(toplam[k]);
    }
}

void print(int x) {
    if(x % 2 == 0) {
        cout << c << ". girilen sayinin rakamlari toplami tektir.\n";
        c++;
    }
    else {
        cout << c << ". girilen sayinin rakamlari toplami cifttir.\n";
        c++;
    }
}

int main() {
    cout << "Kac tane sayi girisi yapmak istiyorsunuz?: ";
    cin >> counter;
    if(counter > 100) {cout << "100'den fazla giris yapilamaz!";}
    else {islem();}
    return 0;
}
