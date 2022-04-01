#include <iostream>
using namespace std;

// class
class Tahun {
      friend istream& operator>>(istream&, Tahun& y);

    public :
    void Kabisat() {
        if(thn%4==0) {
            cout <<"Tahun tersebut merupakan tahun kabisat";
    }
        else {
            cout <<"Tahun tersebut bukan tahun kabisat";
    }
    }
    private:
    int thn; // input
};

// input istream
istream& operator>>(istream& in, Tahun& y) {
    cout <<"============================\n";
    cout << "Input tahun : "; in >> y.thn;
    return in;
}
// output
int main() {
    Tahun x;
    cin >> x;
    x.Kabisat();
    return 0;
}