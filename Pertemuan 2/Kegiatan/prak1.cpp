#include<iostream>
#include<conio.h>
using namespace std;

class konversi{
    friend istream& operator >> (istream&, konversi&);
    public :
    konversi(unsigned int b = 0){
        bilangan = b;
    }
    void membilang();
    private :
    unsigned int bilangan;
};
istream& operator >> (istream& in, konversi& x) {
    cout << "Masukkan bilangan : ";
    in >> x.bilangan;
    return in;
}

void konversi::membilang(){
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

int main(){
    konversi a;
    cin >> a;
    a.membilang();
    getch();
    return 0;
}