#include <iostream>
using namespace std;
class post4 {
    friend ostream& operator << (ostream& out, post4& output);
    private:
    int x=1;
    public:
    void judul();
    int iteratif();
    int rekursif(int x);
};


int post4::iteratif() {
    for(x=1; x<=100; x++){
        if (x % 35 == 0) { // dapat dibagi 5 dan 7
        	cout<< x << " ";
        }
    }
    cout <<"\n\n";
    return x;
}


int post4::rekursif(int x) {
    if(x>=100) {
    	return (0);
    }
    else {
    	if (x % 35 == 0) { // dapat dibagi 5 dan 7
        	cout<< x << " ";
        }
	}
    return rekursif(x+1);
}
void post4::judul() {
    cout << "Bilangan yang dapat dibagi oleh 5 dan 7 antara 1-100 adalah "<<endl;
}

