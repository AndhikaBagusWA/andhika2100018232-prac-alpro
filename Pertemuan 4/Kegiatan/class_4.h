#include <iostream>
using namespace std;
class prak4 {
    friend istream& operator >> (istream& in, prak4& input);
    friend ostream& operator << (ostream& out, prak4& output);

    private:
    int n; // input
    long h; // hasil
    public:
    
    long iteratif(int n); // fungsi utk iteratif
    long rekursif(int n); // fungsi utk rekursif
};

long prak4::iteratif(int n) {
    long fak = 1;
    for(int i=1; i<=n; i++)
        fak *= i;
    return fak;
}

long prak4::rekursif(int n) {
    if(n==0 || n==1)
        return (1);
    else
        return (n*rekursif(n-1));
}

istream& operator >> (istream& in, prak4& input) {
    cout<< "Input bilangan faktorial (n): "; in>>input.n;
    return in;
}

ostream& operator << (ostream& out, prak4& output) {
    output.h = output.iteratif(output.n);
    out << "\nHasil bilangan faktorial iteratif : " <<output.h;
    output.h = output.rekursif(output.n);
    out << "\nHasil bilangan faktorial rekursif : " <<output.h;

    return out;
}
