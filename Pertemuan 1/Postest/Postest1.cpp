#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x1, x2, y1, y2; // input
    int px, py; // output
    float jarak; // output
    cout << "Program mencari jarak antara 2 titik \n";
    cout << "========================================\n";
    cout << "Input titik A1 : "; cin >> x1;
    cout << "\nInput titik A2 : "; cin >> y1;
    cout << "\nInput titik B1 : "; cin >> x2;
    cout << "\nInput titik B2 : "; cin >> y2;
    // proses
    px = (x2 - x1) * (x2 - x1);
    py = (y2 - y1) * (y2 - y1);
    jarak = sqrt(px + py);
    // hasil
    cout << "Jarak kedua titik adalah : "<<jarak<<endl;
    return 0;
}
