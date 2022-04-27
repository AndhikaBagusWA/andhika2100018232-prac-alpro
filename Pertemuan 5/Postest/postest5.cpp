#include <iostream>
using namespace std;
class perulangan {
    friend istream& operator >> (istream& in, perulangan& inputkan);
    friend ostream& operator << (ostream& out, perulangan& outputnya);
    private:
    int n; // suku n
    float a; // proses menghitung
    float t; // total
    public:
    float rekursif(int n);
};

float perulangan::rekursif(int n) {
    if(n==0) // base case
    {
        return a; // mengembalikan nilai a
    }
    else 
    {
        if(n % 2 == 0)
        {
            a -=(float) 1 / n;
        }
        else
        {
            a +=(float) 1 / n;
        }
        return rekursif(n-1); // memanggil fungsi rekursif
    }
}

istream& operator >> (istream& in, perulangan& inputkan) {
    cout<< "Input banyaknya suku n untuk menghitung deret : "; in >>inputkan.n;
    return in;
}

ostream& operator << (ostream& out, perulangan& outputnya) {
	outputnya.t = outputnya.rekursif(outputnya.n); // nilai a dimasukkan ke var t
	out << "\nHasil deret bilangan  : " <<outputnya.t;
	return out;
}

int main() {
    perulangan c;
    cin >> c;
    cout << c;
    return 0;
}