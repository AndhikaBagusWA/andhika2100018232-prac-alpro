#include <iostream>
using namespace std;

int a,b,hasil;

int main() {
	cout<< "Input nilai b untuk menghitung deret b : "; cin >>b;
	if(b==0){
		cout<< "Hasil deret bilangan b : " <<hasil;
		return hasil;
	}
	else 
    {
        if(b % 2 == 0)
        {
            a=a*1/b;
            hasil=-a;
        }
        else
        {
            a=a*1/b;
            hasil=a;
            
        }
        return (b+1);
    }
}
