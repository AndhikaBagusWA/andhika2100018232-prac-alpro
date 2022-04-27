#include <iostream>
using namespace std;

class Loop {
    friend istream& operator >> (istream&, Loop& input);
private:
    int x, y, i; // input
    float pangkat=1; // output

public:
    float perulangan() {
        if(y > 0) {
            for(i=1; i<=y; i++)
            pangkat*=x;
        }
        else {
            for(i=0; i>y; i--)
            pangkat/=x;
        }
        cout << "Hasil " <<x<<  " pangkat "<<y<< " : "<<pangkat;
        return 0;
    }
};

istream& operator >> (istream& in, Loop& input) {
    cout << "Input nilai x : "; in >>input.x;
    cout << "Input nilai y : "; in >>input.y;
    input.perulangan();
    return in;
}

int main() {
    Loop x;
    cin >> x;
    return 0;
}