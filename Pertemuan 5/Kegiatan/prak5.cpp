#include <iostream>
#include "prak5.h"
using namespace std;

int main() {
    perulangan x;
    cout <<"Menggunakan cara iteratif\n";
    x.ulang_for(4);
    cout <<"\nMenggunakan cara rekursif\n";
    x.ulang_rekursif(4);
    return 0;
}