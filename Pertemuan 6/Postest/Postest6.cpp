#include <iostream>
#include "post6.h"
using namespace std;

int main() {
    array x;
    x.input();
    cout << "Setelah digeser ke kanan(Iteratif)\n";
    x.iteratif();
    cout << "Setelah digeser ke kanan(rekursif)\n";
    x.cetak();
}
