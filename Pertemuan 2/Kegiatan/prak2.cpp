#include<iostream>
#include<conio.h>
using namespace std;

class konversi{
    friend istream& operator >> (istream&, konversi&);
    public :
    konversi(unsigned int b = 0){
        bilangan = b;
    }
    void membilang1();
    void membilang2();
    void membilang3();
    void konversikan();
    private :
    unsigned int bilangan;
};
istream& operator >> (istream& in, konversi& x) {
    cout << "Masukkan bilangan : ";
    in >> x.bilangan;
    return in;
}
void konversi::konversikan() {
    if(bilangan <= 11) {
        membilang1();
    }    
    else if(bilangan > 19) {
        membilang3();
    }  
    else
        membilang2();
}

void konversi::membilang3() {
    int satuan;
    if (bilangan > 19) {
        satuan = bilangan % 10;
        bilangan = bilangan/10;
        konversikan();
        cout << " puluh ";
        bilangan = satuan;
        konversikan();
    }
    
}

void konversi::membilang1() {
    switch (bilangan) {
        case 0 : cout << "nol"; break;
        case 1 : cout << "satu"; break;
        case 2 : cout << "dua"; break;
        case 3 : cout << "tiga"; break;
        case 4 : cout << "emoat"; break;
        case 5 : cout << "lima"; break;
        case 6 : cout << "enam"; break;
        case 7 : cout << "tujuh"; break;
        case 8 : cout << "delapan"; break;
        case 9 : cout << "sembilan"; break;
        case 10 : cout << "sepuluh"; break;
        case 11 : cout << "sebelas"; break;
        default: cout << "di luar range"; break;
    }
}

void konversi::membilang2() {
    int temp;
    if(bilangan > 11) {
        bilangan %= 10;
        membilang1();
        cout << " belas";
    }
}

int main(){
    konversi a;
    cin >> a;
    a.konversikan();
    getch();
    return 0;
}